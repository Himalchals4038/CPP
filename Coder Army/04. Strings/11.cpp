#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s){
    int n = s.length();
    if (n < 2) return s;
    int start = 0, maxLength = 1;
    auto expandAroundCenter = [&](int l, int r){
        while (l >= 0 && r < n && s[l] == s[r]){
            l--;
            r++;
        }
        int len = r-l-1;
        if (len > maxLength){
            maxLength = len;
            start = l+1;
        }
    };
    for (int i=0; i<n; i++){
        expandAroundCenter(i, i);
        expandAroundCenter(i, i+1);
    }
    return s.substr(start, maxLength);
}
int main(){
    string s = "babad";
    cout<<longestPalindrome(s)<<endl;
    s = "cbbd";
    cout<<longestPalindrome(s)<<endl;
    s = "a";
    cout<<longestPalindrome(s)<<endl;
    return 0;
}