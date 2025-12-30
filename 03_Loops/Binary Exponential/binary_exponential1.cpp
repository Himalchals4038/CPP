#include <bits/stdc++.h>
using namespace std;
class BinaryToDecimal{
public:
    float bin_exp1(float a, float b){
        if (b == 0) return 1.0;
        if (a == 0 || a == 1) return a;
        bool neg = a < 0;
        a = fabs(a);
        if (b < 0){
            a = 1 / a;
            b = -b;
        }
        int exp = (int)b;
        bool odd_exp = (exp % 2 == 1);
        float res = 1;
        while (exp > 0){
            if (exp & 1)
                res *= a;
            a *= a;
            exp >>= 1;
        }
        if (neg && odd_exp) res = -res;
        return res;
    }
};
int main(){
    float a,b;
    cout<<"Enter no: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    BinaryToDecimal dec1;
    cout<<"Answer: "<<dec1.bin_exp1(a,b)<<endl;
    return 0;
}