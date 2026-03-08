#include <bits/stdc++.h>
using namespace std;
void sub(vector<int> &vec, vector<int> &ans, int i, set<vector<int>> &allSubsets){
    if (i==vec.size()){
        allSubsets.insert(ans);
        return;
    }
    ans.push_back(vec[i]);
    sub(vec,ans,i+1,allSubsets);
    ans.pop_back();
    sub(vec,ans,i+1,allSubsets);
}
vector<vector<int>> subsets(vector<int> &vec){
    set<vector<int>> st;
    vector<int> ans;
    sort(vec.begin(), vec.end());
    sub(vec,ans,0,st);
    vector<vector<int>> allSubsets(st.begin(), st.end());
    return allSubsets;
}
int main(){
    vector<int> vec = {1,2,3,3};
    vector<vector<int>> ans = subsets(vec);
    for (vector<int> val : ans){
        for (int x : val) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}