#include <bits/stdc++.h>
using namespace std;
void longestPrefixSuffix(vector<int> &lps, string s){
    int pre = 0, suff = 1;
    while (suff < s.length()){
        if (s[pre] == s[suff]){
            lps[suff] = pre+1;
            pre++;
            suff++;
        }
        else{
            if (pre == 0){
                lps[suff] = 0;
                suff++;
            }
            else pre = lps[pre-1];
        }
    }
}
int stringMatch(string s1, string s2){
    vector<int> lps(s2.length(), 0);
    longestPrefixSuffix(lps, s2);
    int first = 0, second = 0;
    while (first<s1.length() && second<s2.length()){
        if (s1[first] == s2[second]){
            first++;
            second++;
        }
        else{
            if (second == 0) first++;
            else second = lps[second-1];
        }
    }
    if (second == s2.length()) return first-second;
    return -1;
}
int main(){
    string s1 = "Hello World";
    string s2 = "World";
    cout<<stringMatch(s1, s2)<<endl;
    return 0;
}