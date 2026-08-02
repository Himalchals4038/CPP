#include <bits/stdc++.h>
using namespace std;
/**
 * @brief Helper function to generate parenthesis combinations using backtracking.
 * @param ans Vector to store the resulting combinations.
 * @param current_string The string being built in the current recursive path.
 * @param open_count The number of open parentheses used so far.
 * @param close_count The number of close parentheses used so far.
 * @param n The total number of pairs to generate.
 */
void solve(vector<string> &ans, string current_string, int open_count, int close_count, int n){
    if (current_string.length() == 2 * n){
        ans.push_back(current_string);
        return;
    }
    if (open_count < n) solve(ans, current_string + "(", open_count + 1, close_count, n);
    if (close_count < open_count) solve(ans, current_string + ")", open_count, close_count + 1, n);
}
int main(){
    int n = 3;
    vector<string> ans;
    solve(ans, "", 0, 0, n);
    for(const string& s : ans) cout<<s<<"\n";
    return 0;
}