#include <bits/stdc++.h>
using namespace std;
int fiboNum(int n){
    if (n<=1) return n;
    return fiboNum(n-1) + fiboNum(n-2);
}
vector<int> fibo(int n){
    if(n <= 0) return{};
    if(n == 1) return{0};
    if(n == 2) return{0, 1};
    vector<int> prev_fibo_sequence = fibo(n-1);
    prev_fibo_sequence.push_back(prev_fibo_sequence[n-2] + prev_fibo_sequence[n-3]);
    return prev_fibo_sequence;
}
int main(){
    cout<<"5th Fibonacci number: "<<fiboNum(5)<<endl;
    cout<<"8th Fibonacci number: "<<fiboNum(8)<<endl;

    cout<<"First 0 Fibonacci numbers: ";
    for (int f : fibo(0)) cout<<f<<" "; cout<<endl;
    cout<<"First 1 Fibonacci numbers: ";
    for (int f : fibo(1)) cout<<f<<" "; cout<<endl;
    cout<<"First 2 Fibonacci numbers: ";
    for (int f : fibo(2)) cout<<f<<" "; cout<<endl;
    cout<<"First 5 Fibonacci numbers: ";
    for (int f : fibo(5)) cout<<f<<" "; cout<<endl;
    cout<<"First 8 Fibonacci numbers: ";
    for (int f : fibo(8)) cout<<f<<" "; cout<<endl;
    return 0;
}