#include <bits/stdc++.h>
using namespace std;
vector<int> countCapitalSmall(string s){
    vector<int> ans(2, 0);
    for (char c : s){
        if (c >= 'A' && c <= 'Z') ans[0]++;
        else if (c >= 'a' && c <= 'z') ans[1]++;
    }
    return ans;
}
int longestPalindrome(vector<int> &vec){
    int ans = 0, trig = 0;
    ans += vec[0]/2*2;
    if (ans < vec[0]) trig = 1;
    ans += vec[1]/2*2;
    if (ans < vec[1]) trig = 1;
    return ans + trig;
}
int main(){
    return 0;
}