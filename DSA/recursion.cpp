#include <bits/stdc++.h>
using namespace std;
int recur(int n){
    // n == 1 ? return 1 : return n*recur(n-1);
    if (n==1) return 1;
    return n*recur(n-1);
}
int main(){
    int n;
    cout<<"Enter no: ";
    cin>> n;
    cout<<"Factorial: "<<recur(n);
    return 0;
}