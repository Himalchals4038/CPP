#include <bits/stdc++.h>
using namespace std;
void solve(int n, int left, int right, vector<string> &ans, string &temp){
    if (left + right == 2 * n){
        ans.push_back(temp);
        return;
    }
    if (left < n){
        temp.push_back('(');
        solve(n, left + 1, right, ans, temp);
        temp.pop_back();
    }
    if (right < left){
        temp.push_back(')');
        solve(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}
vector<string> helper (int n){
    vector<string> ans;
    string temp;
    solve(n, 0, 0, ans, temp);
    return ans;
}
int main(){
    int n = 3;
    vector<string> ans;
    ans = helper(n);
    for(const string& s : ans) cout<<s<<"\n";
    return 0;
}