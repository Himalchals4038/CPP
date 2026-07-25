#include <bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string s){
    int n = s.length();
    if (n<2) return n;
    int pref = 0, suff = 1, count = 0;
    while (suff<n){
        if (s[pref] == s[suff]){
            count++;
            pref++;
            suff++;
        }
        else{
            suff++;
            pref = 0;
            count = 0;
        }
    }
    return count;
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