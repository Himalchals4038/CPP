#include <bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string s){
    int n = s.length();
    vector<int> lps(n, 0);
    int len = 0;
    for (int i=1; i<n; i++){
        while (len>0 && s[i] != s[len]) len = lps[len-1];
        if (s[i] == s[len]) len++;
        lps[i] = len;
    }
    return lps[n-1];
}
int main(){
    string s1 = "abab";
    cout<<"LFS of "<<s1<<" is: "<<longestPrefixSuffix(s1)<<endl; // 2
    string s2 = "aaaa";
    cout<<"LFS of "<<s2<<" is: "<<longestPrefixSuffix(s2)<<endl; // 4
    string s3 = "abcab";
    cout<<"LFS of "<<s3<<" is: "<<longestPrefixSuffix(s3)<<endl; // 0
    return 0;
}