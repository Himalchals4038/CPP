#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(int n){
    if(n <= 2) return {};
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i*i<n; i++) if(isPrime[i]) for(int j=i*i; j<n; j+=i) isPrime[j] = false;
    vector<int> primes;
    for(int i=2; i<n; i++) if(isPrime[i]) primes.push_back(i);
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