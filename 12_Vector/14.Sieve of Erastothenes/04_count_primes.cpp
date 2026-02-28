#include <bits/stdc++.h>
using namespace std;
int sieve(int n){
    if(n <= 2) return 0;
    int primeCount = 0;
    vector<bool> isPrime(n, true);
    // isPrime[0] = isPrime[1] = false;
    for(int i=2; i<n; i++){
        if(isPrime[i]){
            primeCount++; 
            for(int j=i*2; j<n; j+=i) isPrime[j] = false;
        }
    }
    return primeCount;
}
int main(){
    int n;
    cout<<"Enter Last no: ";
    cin>>n;
    cout<<"No. of primes before that: "<<sieve(n)<<endl;
    return 0;
}