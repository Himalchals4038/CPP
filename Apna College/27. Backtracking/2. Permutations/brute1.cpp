#include <bits/stdc++.h>
using namespace std;
void permute(vector<int> &vec, int ind, vector<vector<int>> &ans){
    if (ind==vec.size()){
        ans.push_back({vec});
        return;
    }
    for (int i=ind; i<vec.size(); i++){
        swap(vec[i], vec[ind]);
        permute(vec, ind+1, ans);
        swap(vec[i], vec[ind]); //Backtrack
    }
    return;
}
vector<vector<int>> permCall(vector<int> &vec){
    vector<vector<int>> ans;
    permute(vec, 0, ans);
    return ans;
}
int main(){
    vector<int> vec = {1,2,3};
    vector<vector<int>> ans = permCall(vec);
    for (vector<int> val : ans){
        for (int x : val) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}