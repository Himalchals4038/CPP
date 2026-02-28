#include <bits/stdc++.h>
using namespace std;
int gcdFunc(int a, int b){
    if (b==0) return a;
    return gcdFunc(b, a%b);
}
int main(){
    int a, b;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    cout<<"HCF of both numbers: "<<gcdFunc(a, b)<<endl;
    return 0;
}
