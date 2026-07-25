#include <bits/stdc++.h>
using namespace std;
int longestPalindromeSubstring(string s){
    int n = s.length();
    if (n<2) return n;
    int start = 0, maxLen = 1;
    vector<vector<int>> dp(n,vector<int>(n));
    for (int i=0; i<n; i++){
        dp[i][i] = 1;
        if (i<n-1 && s[i]==s[i+1]){
            dp[i][i+1] = 1, start = i, maxLen = 2;
        }
    }
    for (int l=3; l<=n; l++){
        for (int i=0; i+l-1<n; i++){
            int j = i+l-1;
            if (s[i]==s[j] && dp[i+1][j-1]){
                dp[i][j] = 1, start = i, maxLen = l;
            }
        }
    }
    return maxLen;
}
int main(){
    // Example 1: String with an odd-length palindrome ("bab" or "aba")
    string s1 = "babad";
    cout<<"Longest palindrome substring length for '"<<s1<<"': "<<longestPalindromeSubstring(s1)<<endl;

    // Example 2: String with an even-length palindrome ("bb")
    string s2 = "cbbd";
    cout<<"Longest palindrome substring length for '"<<s2<<"': "<<longestPalindromeSubstring(s2)<<endl;

    // Example 3: A longer string with a clear longest palindrome ("racecar")
    string s3 = "tracecars";
    cout<<"Longest palindrome substring length for '"<<s3<<"': "<<longestPalindromeSubstring(s3)<<endl;

    // Example 4: String with no palindrome longer than 1
    string s4 = "abcdefg";
    cout<<"Longest palindrome substring length for '"<<s4<<"': "<<longestPalindromeSubstring(s4)<<endl;

    // Example 5: String that is already a palindrome
    string s5 = "level";
    cout<<"Longest palindrome substring length for '"<<s5<<"': "<<longestPalindromeSubstring(s5)<<endl;
    return 0;
}