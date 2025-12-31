#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n){
    if(n <= 2) return {};
    vector<int> primes;
    vector<bool> isPrime(n, true);
    for(int i = 2; i < n; i++){
        if(isPrime[i]) primes.push_back(i);
        for(int p : primes){
            if((long long)i * p >= n) break;
            isPrime[i * p] = false;
            if(i % p == 0) break;
        }
    }
    return primes;
}
int main(){
    int n;
    cout<<"Enter Last no: ";
    cin>>n;
    vector<int> ans = sieve(n);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}