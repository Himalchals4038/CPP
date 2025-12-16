#include <bits/stdc++.h>
using namespace std;
class BinaryToDecimal{
public:
    int bin_exp(int a,int b){
        b = stoi(bitset<64>(b).to_string());
        int c=1;
        while(b>0){
            if(b%10==0){
                b/=10;
                a=a*a;
                continue;
            }
            c*=a*(b%10);
            b/=10;
            a=a*a;
        }
        return c;
    }
    int bin_exp2(int a, int b) {
        int res = 1;
        while (b>0) {
            if (b&1) res*=a;
            a*=a;
            b>>=1;
        }
        return res;
    }

};
int main(){
    int a,b;
    cout<<"Enter no: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    BinaryToDecimal dec1;
    cout<<"Answer: "<<dec1.bin_exp(a,b)<<endl;
    cout<<"Answer: "<<dec1.bin_exp2(a,b)<<endl;
    return 0;
}