#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    cout<<"LCM of both numbers: "<<a*b/__gcd(a, b)<<endl;
    return 0;
}