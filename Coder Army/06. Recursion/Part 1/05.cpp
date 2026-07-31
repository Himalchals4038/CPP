#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b){
    if (b==0) return a;
    return hcf(b, a%b);
}
int lcm(int a, int b){
    return (a*b)/hcf(a, b);
}
int main(){
    int a = 6144, b = 486;
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<hcf(a, b)<<endl;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a, b)<<endl;
    return 0;
}