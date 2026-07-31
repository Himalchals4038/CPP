#include <bits/stdc++.h>
using namespace std;
bool isPrime_recursive_helper(int num, int divisor){
    if (divisor * divisor > num) return true;
    if (num % divisor == 0) return false;
    return isPrime_recursive_helper(num, divisor + 1);
}
bool isPrime_check(int num){
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    return isPrime_recursive_helper(num, 5);
}
vector<int> prime(int n){
    if(n < 2) return{};
    vector<int> prev_primes = prime(n-1);
    if(isPrime_check(n)) prev_primes.push_back(n);
    return prev_primes;
}
int main(){
    cout<<"Primes up to 0: ";
    for (int p : prime(0)) cout<<p<<" "; cout<<endl;
    cout<<"Primes up to 1: ";
    for (int p : prime(1)) cout<<p<<" "; cout<<endl;
    cout<<"Primes up to 2: ";
    for (int p : prime(2)) cout<<p<<" "; cout<<endl;
    cout<<"Primes up to 7: ";
    for (int p : prime(7)) cout<<p<<" "; cout<<endl;
    cout<<"Primes up to 10: ";
    for (int p : prime(10)) cout<<p<<" "; cout<<endl;
    cout<<endl;
    return 0;
}