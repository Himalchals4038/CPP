#include <iostream>
#include <bitset>
#include <cstdint>
using namespace std;

template<typename Signed,size_t Bits=sizeof(Signed)*8>
void print_twos_complement(Signed x){
    using Unsigned=std::make_unsigned_t<Signed>;
    Unsigned u=static_cast<Unsigned>(x);
    std::bitset<Bits>b(u);
    cout<<x<<"->"<<b.to_string()<<endl;
}
template<typename Signed,size_t Bits=sizeof(Signed)*8>
void print_other_forms(Signed x){
    using Unsigned=std::make_unsigned_t<Signed>;
    Unsigned absu=static_cast<Unsigned>(x<0?-static_cast<long long>(x):x);
    Unsigned sign=(x<0)?1u:0u;
    Unsigned sign_mag=(sign<<(Bits-1))|(absu&((1ull<<(Bits-1))-1));
    Unsigned ones=(x<0)?(~absu&((1ull << Bits)-1)):(absu&((1ull<<Bits)-1));
    cout<<" sign-magnitude: "<<std::bitset<Bits>(sign_mag).to_string()<<endl;
    cout<<" ones-complement: "<<std::bitset<Bits>(ones).to_string()<<endl;
}

int main() {
    print_twos_complement<int8_t, 8>(-5);
    print_twos_complement<int8_t, 8>(5);
    print_twos_complement<int32_t, 32>(-123);
    print_twos_complement<int32_t, 32>(123);

    cout<<"--- other forms for -5 (8-bit) ---"<<endl;
    print_other_forms<int8_t,8>(-5);
}