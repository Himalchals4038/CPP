#include <bits/stdc++.h>
using namespace std;
int longestPalindromeLength(string s){
    int n = s.length();
    vector<int> freq(26, 0);
    for (int i=0; i<n; i++) freq[s[i]-'a']++;
    int ans = 0;
    for (int i=0; i<26; i++) ans += freq[i]/2*2;
    if (ans < n) ans++;
    return ans;
}
int main(){
    // Example 1: A complex string with multiple odd-count characters
    string s1 = "abacccddeeff"; // a:2, b:1, c:3, d:2, e:2, f:2 -> can form "adcfecfcda" + 'b' or 'c' -> length 11
    cout << "Longest palindrome length for '" << s1 << "': " << longestPalindromeLength(s1) << endl;

    // Example 2: A string where all characters have even counts
    string s2 = "aabbccdd"; // All characters can be paired -> length 8
    cout << "Longest palindrome length for '" << s2 << "': " << longestPalindromeLength(s2) << endl;

    // Example 3: A string with all unique characters
    string s3 = "abcdefg"; // Only one character can be used -> length 1
    cout << "Longest palindrome length for '" << s3 << "': " << longestPalindromeLength(s3) << endl;

    return 0;
}