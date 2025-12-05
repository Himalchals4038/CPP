// list_error_codes.cpp
// Enumerate common errno macros available on the current platform
// Print unique numeric codes, macro names, and strerror() descriptions.

#include <cerrno>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using Pair = std::pair<std::string,int>;

static std::vector<Pair> gather_error_macros() {
    std::vector<Pair> codes;
#define ADD(name) codes.emplace_back(#name, (int)(name))

#ifdef E2BIG
    ADD(E2BIG);
#endif
#ifdef EACCES
    ADD(EACCES);
#endif
#ifdef EADDRINUSE
    ADD(EADDRINUSE);
#endif
#ifdef EADDRNOTAVAIL
    ADD(EADDRNOTAVAIL);
#endif
#ifdef EAFNOSUPPORT
    ADD(EAFNOSUPPORT);
#endif
#ifdef EAGAIN
    ADD(EAGAIN);
#endif
#ifdef EALREADY
    ADD(EALREADY);
#endif
#ifdef EBADF
    ADD(EBADF);
#endif
#ifdef EBUSY
    ADD(EBUSY);
#endif
#ifdef ECHILD
    ADD(ECHILD);
#endif
#ifdef ECONNABORTED
    ADD(ECONNABORTED);
#endif
#ifdef ECONNREFUSED
    ADD(ECONNREFUSED);
#endif
#ifdef ECONNRESET
    ADD(ECONNRESET);
#endif
#ifdef EDEADLK
    ADD(EDEADLK);
#endif
#ifdef EDESTADDRREQ
    ADD(EDESTADDRREQ);
#endif
#ifdef EDOM
    ADD(EDOM);
#endif
#ifdef EEXIST
    ADD(EEXIST);
#endif
#ifdef EFAULT
    ADD(EFAULT);
#endif
#ifdef EFBIG
    ADD(EFBIG);
#endif
#ifdef EHOSTUNREACH
    ADD(EHOSTUNREACH);
#endif
#ifdef EIDRM
    ADD(EIDRM);
#endif
#ifdef EILSEQ
    ADD(EILSEQ);
#endif
#ifdef EINPROGRESS
    ADD(EINPROGRESS);
#endif
#ifdef EINTR
    ADD(EINTR);
#endif
#ifdef EINVAL
    ADD(EINVAL);
#endif
#ifdef EIO
    ADD(EIO);
#endif
#ifdef EISCONN
    ADD(EISCONN);
#endif
#ifdef EISDIR
    ADD(EISDIR);
#endif
#ifdef ELOOP
    ADD(ELOOP);
#endif
#ifdef EMFILE
    ADD(EMFILE);
#endif
#ifdef EMLINK
    ADD(EMLINK);
#endif
#ifdef EMSGSIZE
    ADD(EMSGSIZE);
#endif
#ifdef ENAMETOOLONG
    ADD(ENAMETOOLONG);
#endif
#ifdef ENETDOWN
    ADD(ENETDOWN);
#endif
#ifdef ENETRESET
    ADD(ENETRESET);
#endif
#ifdef ENETUNREACH
    ADD(ENETUNREACH);
#endif
#ifdef ENFILE
    ADD(ENFILE);
#endif
#ifdef ENOBUFS
    ADD(ENOBUFS);
#endif
#ifdef ENODEV
    ADD(ENODEV);
#endif
#ifdef ENOENT
    ADD(ENOENT);
#endif
#ifdef ENOEXEC
    ADD(ENOEXEC);
#endif
#ifdef ENOLCK
    ADD(ENOLCK);
#endif
#ifdef ENOMEM
    ADD(ENOMEM);
#endif
#ifdef ENOPROTOOPT
    ADD(ENOPROTOOPT);
#endif
#ifdef ENOSPC
    ADD(ENOSPC);
#endif
#ifdef ENOSYS
    ADD(ENOSYS);
#endif
#ifdef ENOTCONN
    ADD(ENOTCONN);
#endif
#ifdef ENOTDIR
    ADD(ENOTDIR);
#endif
#ifdef ENOTEMPTY
    ADD(ENOTEMPTY);
#endif
#ifdef ENOTTY
    ADD(ENOTTY);
#endif
#ifdef ENXIO
    ADD(ENXIO);
#endif
#ifdef EOPNOTSUPP
    ADD(EOPNOTSUPP);
#endif
#ifdef EPERM
    ADD(EPERM);
#endif
#ifdef EPIPE
    ADD(EPIPE);
#endif
#ifdef EPROTO
    ADD(EPROTO);
#endif
#ifdef EPROTONOSUPPORT
    ADD(EPROTONOSUPPORT);
#endif
#ifdef EPROTOTYPE
    ADD(EPROTOTYPE);
#endif
#ifdef ERANGE
    ADD(ERANGE);
#endif
#ifdef EROFS
    ADD(EROFS);
#endif
#ifdef ESPIPE
    ADD(ESPIPE);
#endif
#ifdef ESRCH
    ADD(ESRCH);
#endif
#ifdef ETIMEDOUT
    ADD(ETIMEDOUT);
#endif
#ifdef ETXTBSY
    ADD(ETXTBSY);
#endif
#ifdef EWOULDBLOCK
    ADD(EWOULDBLOCK);
#endif

#undef ADD

    return codes;
}

int main(int argc, char* argv[]) {
    auto macros = gather_error_macros();
    if (macros.empty()) {
        std::cout << "No errno macros detected on this platform (or none listed in the program).\n";
        return 0;
    }

    // Map numeric value -> list of macro names
    std::map<int, std::vector<std::string>> by_value;
    for (auto &p : macros) {
        by_value[p.second].push_back(p.first);
    }

    // Print header
    std::cout << "Detected error codes (numeric -> macro names -> strerror):\n";
    std::cout << "-------------------------------------------------------\n";

    for (auto &kv : by_value) {
        int val = kv.first;
        auto &names = kv.second;
        std::sort(names.begin(), names.end());
        // Join names
        std::string joined;
        for (size_t i = 0; i < names.size(); ++i) {
            if (i) joined += ", ";
            joined += names[i];
        }

        const char* msg = std::strerror(val);
        std::cout << val << " -> " << joined << " -> " << (msg ? msg : "(no message)") << "\n";
    }

    return 0;
}
