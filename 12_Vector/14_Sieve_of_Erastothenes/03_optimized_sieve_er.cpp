#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n){
    if(n <= 2) return {};
    vector<int> primes;
    primes.push_back(2);
    // Map index i to number (2*i + 3)
    int limit = (n-2)/2;
    vector<char> isPrime(limit, 1);
    for(int i = 0; i < limit; i++){
        if(isPrime[i]){
            int p = 2 * i + 3;
            if((long long)p * p >= n) break;
            // Start marking from p*p. Step is p (corresponds to 2*p in numbers)
            for(int j = (p * p - 3) / 2; j < limit; j += p) isPrime[j] = 0;
        }
    }
    for(int i = 0; i < limit; i++) if(isPrime[i]) primes.push_back(2 * i + 3);
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