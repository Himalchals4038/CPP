#include <bits/stdc++.h>
using namespace std;

string addBinary(const string& a, const string& b) {
    int i = (int)a.size() - 1, j = (int)b.size() - 1, carry = 0;
    string res; res.reserve(max(a.size(), b.size()) + 1);
    while (i >= 0 || j >= 0 || carry) {
        carry += (i >= 0) ? a[i--] - '0' : 0;
        carry += (j >= 0) ? b[j--] - '0' : 0;
        res.push_back(char('0' + (carry & 1)));
        carry >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cout << addBinary("1010", "1011") << "\n"; // 10101
    cout << addBinary("0", "0") << "\n";         // 0
    cout << addBinary("111", "1") << "\n";       // 1000
    return 0;
}
