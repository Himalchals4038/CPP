#include <bits/stdc++.h>
using namespace std;
class BinaryToDecimal{
public:
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
int main(){
    float a,b;
    cout<<"Enter no: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    BinaryToDecimal dec1;
    cout<<"Answer: "<<dec1.bin_exp3(a,b)<<endl;
    return 0;
}