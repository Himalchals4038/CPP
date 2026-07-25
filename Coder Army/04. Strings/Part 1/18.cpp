#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s){
    map<char, int> freq;
    for (char c : s) freq[c]++;
    int length = 0;
    bool hasOdd = false;
    for (auto const& [key, val] : freq) {
        length += (val/2)*2;
        if (val%2 != 0) hasOdd = true;
    }
    return length + (hasOdd ? 1 : 0);
}
int main(){
    string s = "abccccdd";
    cout<<longestPalindrome(s)<<endl;
    return 0;
}