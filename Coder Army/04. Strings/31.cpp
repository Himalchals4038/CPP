#include <bits/stdc++.h>
using namespace std;
string longestSubstring(string s){
    if (s.empty()) return "";
    int n = s.size(), maxLen = 0, start = 0, windowStart = 0;
    unordered_map<char, int> charMap;
    for (int windowEnd = 0; windowEnd < n; windowEnd++){
        char rightChar = s[windowEnd];
        if (charMap.find(rightChar) != charMap.end() && charMap[rightChar] >= windowStart){
            windowStart = charMap[rightChar] + 1;
        }
        charMap[rightChar] = windowEnd;
        if (windowEnd - windowStart + 1 > maxLen){
            maxLen = windowEnd - windowStart + 1;
            start = windowStart;
        }
    }
    return s.substr(start, maxLen);
}
int main(){
    cout<<"Longest substring of 'abcabcbb' is: "<<longestSubstring("abcabcbb")<<endl; // "abc"
    cout<<"Longest substring of 'bbbbb' is: "<<longestSubstring("bbbbb")<<endl;    // "b"
    cout<<"Longest substring of 'pwwkew' is: "<<longestSubstring("pwwkew")<<endl;  // "wke"
    return 0;
}