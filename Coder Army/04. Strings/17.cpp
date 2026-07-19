#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s){
    int n = s.length();
    int res = 0;
    for (int i=0; i<n; i++){
        int l = i, r = i;
        while (l>=0 && r<n && s[l]==s[r]){
            res = max(res, r-l+1);
            l--, r++;
        }
        l = i, r = i+1;
        while (l>=0 && r<n && s[l]==s[r]){
            res = max(res, r-l+1);
            l--, r++;
        }
    }
    return res;
}
int main(){
    
    return 0;
}