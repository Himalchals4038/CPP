#include <bits/stdc++.h>
using namespace std;
void perfectSum(vector<int> &vec, int n, int index, int target, vector<vector<int>> &ans, vector<int> &temp){
    if (index == n){
        if (target == 0) ans.push_back(temp);
        return;
    }
    if (vec[index] <= target){
        temp.push_back(vec[index]);
        perfectSum(vec, n, index + 1, target - vec[index], ans, temp);
        temp.pop_back();
    }
    perfectSum(vec, n, index + 1, target, ans, temp);
}
vector<vector<int>> helper(vector<int> &vec, int target){
    vector<vector<int>> ans;
    vector<int> temp;
    perfectSum(vec, vec.size(), 0, target, ans, temp);
    return ans;
}
int main(){
    vector<int> vec ={1, 2, 3, 4, 5, 6};
    vector<vector<int>> result = helper(vec, 6);
    cout<<"Subsets with sum 6 are:\n";
    for (const auto& subset : result){
        cout<<"{ ";
        for (int num : subset) cout<<num<<" ";
        cout<<"}\n";
    }
    return 0;
}