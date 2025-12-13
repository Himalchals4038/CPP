#include <iostream>
#include <bitset>
#include <cstdint>
#include <type_traits>
using namespace std;

template<typename Signed>
void show_bits_and_sign(Signed x) {
    using Unsigned = std::make_unsigned_t<Signed>;
    constexpr size_t BITS = sizeof(Signed) * 8;
    Unsigned u = static_cast<Unsigned>(x);                 // reinterpret bit-pattern
    std::bitset<sizeof(Signed)*8> bits(u);
    bool sign_from_bit = ((u >> (BITS - 1)) & 1u) != 0;    // 1 if negative in two's complement
    std::cout << +x << " -> " << bits.to_string()
        << "  sign-bit=" << sign_from_bit
        << "  (x<0)=" << (x < 0) << '\n';
}

int main() {
    show_bits_and_sign<int32_t>(  5);
    show_bits_and_sign<int32_t>( -5);
    show_bits_and_sign<int32_t>( INT32_MIN);
    show_bits_and_sign<int8_t>(  5);
    show_bits_and_sign<int8_t>( -5);
}