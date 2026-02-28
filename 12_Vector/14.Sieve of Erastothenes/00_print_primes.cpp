#include <bits/stdc++.h>
using namespace std;
vector<int> isPrime(int n){
    if(n<2) return {};
    vector<int> primeList;
    primeList.push_back(2);
    for (int i=3; i<=n; i++){
        bool isPrime = true;
        for (int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) primeList.push_back(i);
    }
    return primeList;
}
int main(){
    int n;
    cout<<"Enter last no: ";
    cin>>n;
    vector<int> ans = isPrime(n);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}