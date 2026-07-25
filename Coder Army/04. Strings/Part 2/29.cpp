#include <bits/stdc++.h>
using namespace std;
int factorial1(int n){
    int res = 1;
    for (int i=2; i<=n; i++){
        res *= i;
    }
    return res;
}
int factorial2(int n){
    if (n==0) return 1;
    return n*factorial2(n-1);
}
int main(){
    int n = 8;
    cout<<"Factorial of "<<n<<" (iterative): "<<factorial1(n)<<endl;
    cout<<"Factorial of "<<n<<" (recursive): "<<factorial2(n)<<endl;
    return 0;
}