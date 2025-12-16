#include <bits/stdc++.h>
using namespace std;
class BinaryToDecimal
{
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

    float bin_exp2(float a, float b){
        if (b == 0) return 1.0;
        if (a == 0) return 0.0;
        if (a == 1) return 1.0;
        bool neg =  (a < 0 && fmod(b, 2) != 0);
        a = fabs(a);
        if (b < 0){
            a = 1 / a;
            b = -b;
        }
        b = stoi(bitset<64>(b).to_string());
        int exp = (int)b;
        float c = 1;
        while (exp > 0){
            if (fmod(exp, 10) == 1)
            c *= a * fmod(exp, 10);
            exp /= 10;
            a *= a;
        }
        if (neg) return -c;
        return c;
    }

    float bin_exp4(float a, float b){
        float c = 1;
        if (b == 0) return 1.0;
        if (a == 0) return 0.0;
        if (a == 1) return 1.0;
        bool neg =  (a < 0 && fmod(b, 2) != 0);
        a = fabs(a);
        if (b < 0){
            a = 1/a;
            b = -b;
        }
        while(b>0){
            if(fmod(b, 2)==1) c*=a;
            a*=a;
            b/=2;
        }
        if (neg) return -c;
        return c;
    }
    
    int bin_exp3(int a, int b){
        int res = 1;
        while (b > 0){
            if (b & 1) res *= a;
            a *= a;
            b >>= 1;
        }
        return res;
    }
};
int main()
{
    float a,b;
    cout<<"Enter no: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    BinaryToDecimal dec1;
    // cout<<"Answer: "<<dec1.bin_exp1(a,b)<<endl;
    cout<<"Answer: "<<dec1.bin_exp2(a,b)<<endl;
    // cout<<"Answer: "<<dec1.bin_exp3(a,b)<<endl;
    // cout<<"Answer: "<<dec1.bin_exp4(a,b)<<endl;
    return 0;
}