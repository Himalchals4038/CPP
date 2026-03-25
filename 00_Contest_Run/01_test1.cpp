#include <bits/stdc++.h>
using namespace std;

int main(){
	// your code goes here
    int t;
    cin>>t;
    while (t--){
        int n,budget;
        cin>>n>>budget;
        vector<int> pri(n),tas(n);
        for (int i=0; i<n; ++i) cin>>pri[i];
        for (int i=0; i<n; ++i) cin>>tas[i];
        int maxtas=0;
        for (int i=0; i<n; ++i){
            for (int j=i+1; j<n; ++j){
                for (int ord=0; ord<2; ++ord){
                    int a=i, b=j;
                    if (ord==1) swap(a,b);
                    int exp = max(pri[a],pri[b]);
                    int cheap = min(pri[a],pri[b]);
                    int dis = min(exp/2,100);
                    int totalCost=cheap+(exp-dis);
                    if (totalCost<=budget) maxtas=max(maxtas,tas[a]+tas[b]);
                }
            }
        }
        cout<<maxtas<<endl;
    }
}
