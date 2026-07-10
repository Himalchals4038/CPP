#include <bits/stdc++.h>
using namespace std;
void combSum(vector<int> &vec, int target, vector<vector<int>> &ans, vector<int> &combination, int i){
    if (target == 0){
        ans.push_back({combination});
        return;
    }
    if (i == vec.size() || target<0) return;
    combination.push_back(vec[i]);
    combSum(vec, target-vec[i], ans, combination, i);
    combination.pop_back();
    combSum(vec, target, ans, combination, i+1);
    return;
}
vector<vector<int>> combinationSum(vector<int> &vec, int target){
    vector<vector<int>> ans;
    vector<int> combination;
    combSum(vec, target, ans, combination, 0);
    return ans;
}
int main(){
    vector<int> vec = {2,3,5,10,15,8,7,4};
    int n;
    cout<<"Enter target: ";
    cin>>n;
    vector<vector<int>> ans = combinationSum(vec, n);
    for (vector<int> val : ans){
        for (int i : val){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}