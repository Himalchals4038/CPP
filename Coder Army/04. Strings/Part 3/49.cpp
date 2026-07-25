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
bool kmp_match(string s1, string s2){
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
    if (second == s2.length()) return true;
    return false;
}
int repeatedStringMatch(string a, string b){
    if (a == b) return 1;
    int repeat = 1;
    string temp = a;
    while (temp.size() < b.size()){
        temp += a;
        repeat++;
    }
    if (kmp_match(temp, b)) return repeat;
    temp += a;
    if (kmp_match(temp, b)) return repeat+1;
    return -1;
}
int main(){
    cout<<"a = \"abcd\", b = \"cdabcdab\": "<<repeatedStringMatch("abcd", "cdabcdab")<<endl; // Expected: 3
    cout<<"a = \"a\", b = \"aa\": "<<repeatedStringMatch("a", "aa")<<endl; // Expected: 2
    cout<<"a = \"a\", b = \"a\": "<<repeatedStringMatch("a", "a")<<endl; // Expected: 1
    cout<<"a = \"abc\", b = \"caba\": "<<repeatedStringMatch("abc", "caba")<<endl; // Expected: -1
    return 0;
}