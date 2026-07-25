#include <bits/stdc++.h>
using namespace std;
void computeLPSArray(const string& pattern, vector<int>& lps){
    int m = pattern.length();
    lps.assign(m, 0);
    int length = 0;

    for (int i = 1; i < m; i++){
        while (length > 0 && pattern[i] != pattern[length]) length = lps[length - 1];
        if (pattern[i] == pattern[length]) length++;
        lps[i] = length;
    }
}
int makeStringPalindrome(string s){
    int n = s.length();
    string rev = s;
    reverse(rev.begin(), rev.end());
    string s1 = s + "$" + rev;
    vector<int> lps(s1.length(), 0);
    computeLPSArray(s1, lps);
    return n - lps[s1.length() - 1];
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