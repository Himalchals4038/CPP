#include <bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string s, vector<int> &lps){
    int pre = 0, suff = 1;
    while (suff < s.length()){
        if (s[pre] == s[suff]){
            lps[suff] = pre+1;
            pre++;
            suff++;
        }
        else{
            if (pre == 0){
                lps[suff] = 0;
                suff++;
            }
            else pre = lps[pre-1];
        }
    }
    return lps[s.length()-1];
}
int makeStringPalindrome(string s){
    int n = s.length();
    string rev = s;
    reverse(rev.begin(), rev.end());
    string s1 = s + "$" + rev;
    vector<int> lps(s1.length(), 0);
    return n - longestPrefixSuffix(s1, lps);
}
int main(){
    string s1 = "ababab";
    cout<<makeStringPalindrome(s1)<<endl;
    string s2 = "a";
    cout<<makeStringPalindrome(s2)<<endl;
    string s3 = "abc";
    cout<<makeStringPalindrome(s3)<<endl;
    return 0;
}