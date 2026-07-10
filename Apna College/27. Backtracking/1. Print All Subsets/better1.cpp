#include <bits/stdc++.h>
using namespace std;
void sub(vector<int> &vec, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
    if (i==vec.size()){
        allSubsets.push_back(ans);
        return;
    }
    ans.push_back(vec[i]);
    sub(vec,ans,i+1,allSubsets);
    ans.pop_back();
    int idx = i+1;
    while(idx<vec.size() && vec[idx]==vec[idx-1]) idx++;
    sub(vec,ans,idx,allSubsets);
}
vector<vector<int>> subsets(vector<int> &vec){
    vector<vector<int>> allSubsets;
    vector<int> ans;
    sort(vec.begin(), vec.end());
    sub(vec, ans, 0, allSubsets);
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