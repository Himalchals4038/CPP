#include <bits/stdc++.h>
using namespace std;
vector<int> prod(vector<int> vec) {
    if (vec.size() == 0) return {};
    vector<int> ans(vec.size(),1);
    for(int i=1;i<vec.size();i++){
        ans[i] = ans[i-1]*vec[i-1];
    }
    int suffix = 1;
    for(int i=vec.size()-2;i>=0;i--){
        suffix*=vec[i+1];
        ans[i]*=suffix;
    }
    return ans;
}

int main(){
    vector<int> vec = {7, 2, 3, 4, 5, 6};
    vector<int> ans = prod(vec);
    for (int i:ans) cout<<i<<" ";
    return 0;
}
