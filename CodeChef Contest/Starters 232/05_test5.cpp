#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    if (n == 0) return 0;
    vector<long long> vec(n);
    for (int j=0;j<n;j++) cin>>vec[j];
    sort(vec.begin(), vec.end());

    vector<long long> df(n-1);
    for (int i=0;i<n-1;i++) df[i] = vec[i+1]-vec[i];
    sort(df.begin(),df.end());

    vector<long long> pr(n,0);
    for (int i=0;i<n-1;i++) pr[i+1]=pr[i]+df[i];

    for (int i=0;i<q;i++){
        long long int b;
        cin>>b;
        long long ct=upper_bound(df.begin(),df.end(),b)-df.begin();
        long long ans=b+pr[ct]+(n-1-ct)*b;
        cout<<ans<<"\n";
    }
    return 0;
}
