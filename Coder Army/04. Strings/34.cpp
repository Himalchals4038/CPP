#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s){
    vector<bool> count(256, 0);
    int first = 0, second = 0, len = 0;
    while (second < s.length()){
        if (count[s[second]] == 0){
            count[s[second]] = 1;
            len = max(len, second-first+1);
            second++;
        }
        else{
            count[s[first]] = 0;
            first++;
        }
    }
    return len;
}
int main(){
    cout<<"Longest substring size of 'abcabcbb' is: "<<longestSubstring("abcabcbb")<<endl; // "abc"
    cout<<"Longest substring size of 'bbbbb' is: "<<longestSubstring("bbbbb")<<endl;    // "b"
    cout<<"Longest substring size of 'pwwkew' is: "<<longestSubstring("pwwkew")<<endl;  // "wke"
    return 0;
}