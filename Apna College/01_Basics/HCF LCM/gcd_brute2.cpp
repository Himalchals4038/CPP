#include <bits/stdc++.h>
using namespace std;
int gcdFunc(int a, int b){
    int gcd = 1;
    for (int i=1; i<=min(a, b); i++){
        if (a%i==0 && b%i==0) gcd = i;
    }
    return gcd;
}
int main(){
    int a, b;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    cout<<"HCF of both numbers: "<<gcdFunc(a, b)<<endl;
    return 0;
}