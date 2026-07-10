#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        vector<long long> te(a);
        long long mi = LLONG_MAX;
        long long ma = LLONG_MIN;
        for (int j=0;j<a;j++){
            cin>>te[j];
            mi = min(mi, te[j]);
            ma = max(ma, te[j]);
        }
        int count = 0;
        for (int j=0;j<a;j++) if (te[j]>mi && te[j]<ma) count++;
        cout<<count<<endl;
    }
    return 0;
}
