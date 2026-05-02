#include <bits/stdc++.h>
using namespace std;
void part(string &s, vector<vector<string>> &ans, vector<string> &combination, int i, vector<vector<bool>> &dp){
    if (i == s.size()){
        ans.push_back(combination);
        return;
    }
    for (int j=i;j<s.size();j++){
        if (dp[i][j]){
            combination.push_back(s.substr(i, j-i+1));
            part(s, ans, combination, j+1, dp);
            combination.pop_back();
        }
    }
    return;
}
vector<vector<string>> partition(string s){
    int n = s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    for (int i=0; i<n; i++) dp[i][i] = true;
    for (int len=2; len<=n; len++) {
        for (int i=0; i <= n-len; i++) {
            int j = i+len-1;
            if (s[i] == s[j] && (len == 2 || dp[i+1][j-1])) dp[i][j] = true;
        }
    }
    vector<vector<string>> ans;
    vector<string> combination;
    part(s, ans, combination, 0, dp);
    return ans;
}
int main(){
    string s = "aabcacddba";
    vector<vector<string>> ans = partition(s);
    for (vector<string> val : ans){
        for (string str : val) cout<<str<<" ";
        cout<<endl;
    }
    return 0;
}