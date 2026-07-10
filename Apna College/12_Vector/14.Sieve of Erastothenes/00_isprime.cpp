#include <bits/stdc++.h>
using namespace std;
string isPrime(int n){
    if (n<2) return "No";
    for (int i=2; i*i<=n; i++){
        if (n%i==0) return "No";
    }
    return "Yes";
}
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;
    cout<<isPrime(n)<<endl;
    return 0;
}
