#include <bits/stdc++.h>
using namespace std;
void sub(vector<int> &vec, vector<int> &ans, int ind, vector<vector<int>> &allSubsets){
    allSubsets.push_back(ans);
    for (int i=ind; i<vec.size(); i++) {
        if (i>ind && vec[i]==vec[i-1]) continue;
        ans.push_back(vec[i]);
        sub(vec, ans, i+1, allSubsets);
        ans.pop_back();
    }
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