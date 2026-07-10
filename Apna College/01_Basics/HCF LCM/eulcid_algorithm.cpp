#include <bits/stdc++.h>
using namespace std;
int gcdFunc(int a, int b){
    if (a%b==0) return b;
    if (b%a==0) return a;
    if (a>b) return gcdFunc(a-b,b);
    return gcdFunc(a,b-a);
}
int main(){
    int a, b;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    cout<<"HCF of both numbers: "<<gcdFunc(a, b)<<endl;
    return 0;
}