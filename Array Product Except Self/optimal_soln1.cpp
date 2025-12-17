#include <bits/stdc++.h>
using namespace std;
vector<int> prod(vector<int> vec) {
    if (vec.size() == 0) return {};
    vector<int> ans(vec.size());
    int pref = 1;
    for (int i = 0; i < vec.size(); i++){
        ans[i] = pref;
        pref *= vec[i];
    }
    int suf = 1;
    for (int i = vec.size() - 1; i >= 0; i--){
        ans[i] *= suf;
        suf *= vec[i];
    }
    return ans;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    vector<int> ans = prod(vec);
    for (int i:ans) cout<<i<<" ";
    return 0;
}
