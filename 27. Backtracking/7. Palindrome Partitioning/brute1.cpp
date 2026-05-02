#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s, int start, int end){
    while(start <= end){
        if(s[start++] != s[end--]) return false;
    }
    return true;
}
void part(string &s, vector<vector<string>> &ans, vector<string> &combination, int i){
    if (i == s.size()){
        ans.push_back(combination);
        return;
    }
    for (int j=i;j<s.size();j++){
        if (isPalindrome(s, i, j)){
            combination.push_back(s.substr(i, j-i+1));
            part(s, ans, combination, j+1);
            combination.pop_back();
        }
    }
    return;
}
vector<vector<string>> partition(string s){
    vector<vector<string>> ans;
    vector<string> combination;
    part(s, ans, combination, 0);
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