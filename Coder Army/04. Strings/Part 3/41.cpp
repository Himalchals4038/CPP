#include <bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string s){
    vector<int> lps(s.length(), 0);
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
    return lps[s.length()-1];
}
int main(){
    string s1 = "abab";
    cout<<"LFS of "<<s1<<" is: "<<longestPrefixSuffix(s1)<<endl;
    string s2 = "aaaa";
    cout<<"LFS of "<<s2<<" is: "<<longestPrefixSuffix(s2)<<endl;
    string s3 = "abcab";
    cout<<"LFS of "<<s3<<" is: "<<longestPrefixSuffix(s3)<<endl;
    string s4 = "abcabdeabc";
    cout<<"LFS of "<<s4<<" is: "<<longestPrefixSuffix(s4)<<endl;
    return 0;
}