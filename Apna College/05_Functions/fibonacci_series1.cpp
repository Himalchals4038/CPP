#include <bits/stdc++.h>
using namespace std;
int fibo(int a){
    if (a==0||a==1) return a;
    return fibo(a-1)+fibo(a-2);
}
int main(){
    cout<<fibo(5)<<endl;
    cout<<fibo(10)<<endl;
    return 0;
}