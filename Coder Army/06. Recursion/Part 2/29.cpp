#include <bits/stdc++.h>
using namespace std;
int perfectSum(vector<int> &vec, int n, int index, int target, vector<vector<int>> &dp){
    if (target == 0) return 1;
    if (index == n || target < 0) return 0;
    if (dp[index][target] != -1) return dp[index][target];
    int pick = perfectSum(vec, n, index + 1, target - vec[index], dp);
    int dont_pick = perfectSum(vec, n, index + 1, target, dp);
    return dp[index][target] = pick + dont_pick;
}
int helper(vector<int> &vec, int target){
    vector<vector<int>> dp(vec.size(), vector<int>(target + 1, -1));
    return perfectSum(vec, vec.size(), 0, target, dp);
}
int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout<<"Sum Count: "<<helper(vec, 6)<<"\n";
    return 0;
}