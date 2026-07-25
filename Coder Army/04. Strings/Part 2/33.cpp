#include <bits/stdc++.h>
using namespace std;
string longestSubstring(string s){
    string ans;
    vector<bool> count(256, 0);
    int first = 0, last = 0, len = 0;
    while (last < s.length()){
        if (count[s[last]] == 0){
            count[s[last]] = 1;
            last++;
            len = max(len, last-first);
        }
        else{
            count[s[first]] = 0;
            first++;
        }
    }
    for (int i=first; i<last; i++) ans += s[i];
    return ans;
}
int main(){
    cout<<"Longest substring of 'abcabcbb' is: "<<longestSubstring("abcabcbb")<<endl; // "abc"
    cout<<"Longest substring of 'bbbbb' is: "<<longestSubstring("bbbbb")<<endl;    // "b"
    cout<<"Longest substring of 'pwwkew' is: "<<longestSubstring("pwwkew")<<endl;  // "wke"
    return 0;
}