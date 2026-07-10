#include <bits/stdc++.h>
using namespace std;
class BinaryToDecimal{
public:
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