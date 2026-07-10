#include<iostream>
using namespace std;
int fibo(int n){
    if (n<=1) return n;
    int prev2=0, prev=1;
    for (int i=2; i<=n; i++) {
        int cur = prev+prev2;
        prev2 = prev;
        prev = cur;
    }
    return prev;
}
int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Number in fibonacci series: "<<fibo(a);
    return 0;
}