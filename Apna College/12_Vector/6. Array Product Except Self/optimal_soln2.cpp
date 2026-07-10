#include <bits/stdc++.h>
using namespace std;
vector<int> prod(vector<int> vec) {
    if (vec.size() == 0) return {};
    vector<int> ans(vec.size());
    vector<int> prefix(vec.size(),1);
    vector<int> suffix(vec.size(),1);
    for(int i=1;i<vec.size();i++){
        prefix[i] = prefix[i-1]*vec[i-1];
    }
    for(int i=vec.size()-2;i>=0;i--){
        suffix[i] = suffix[i+1]*vec[i+1];
    }
    for(int i=0;i<vec.size();i++){
        ans[i] = prefix[i]*suffix[i];
    }
    return ans;
}

int main(){
    vector<int> vec = {7, 2, 3, 4, 5, 6};
    vector<int> ans = prod(vec);
    for (int i:ans) cout<<i<<" ";
    return 0;
}
