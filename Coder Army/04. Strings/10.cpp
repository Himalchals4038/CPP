#include <bits/stdc++.h>
using namespace std;
string sortString(string s){
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;
    string ans = "";
    for (int i=0; i<26; i++) ans += string(freq[i], i + 'a');
    return ans;
}
int main(){
    string s = "geeksforgeeks";
    cout<<sortString(s)<<endl;
    return 0;
}