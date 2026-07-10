#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long m, n;
    cin>>n>>m;
    vector<int> vec;
    long long mv=0;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
        if (a>mv) mv=a;
    }
    
    long long low=1,high=mv,ans=0;
    while (low <= high) {
        long long mid = low+(high-low)/2;
        long long pp = 0;
        for (int fd : vec) pp += fd/mid;
        if (pp >= m) {
            ans = mid;
            low = mid+1;
        } else high = mid-1;
    }
    
    cout<<ans<<endl;
    return 0;
}
