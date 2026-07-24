#include <bits/stdc++.h>
using namespace std;
int longestPrefixSuffix(string s){
    int n = s.length();
    vector<vector<char>> prefix;
    vector<vector<char>> suffix;
    for (int i=0; i<n; i++){
        vector<char> temp;
        for (int j=0; j<=i; j++) temp.push_back(s[j]);
        prefix.push_back(temp);
    }
    for (int i=n-1; i>=0; i--){
        vector<char> temp;
        for (int j=i; j<n; j++) temp.push_back(s[j]);
        suffix.push_back(temp);
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (prefix[i] == suffix[j]){
                return prefix[i].size();
            }
        }
    }
    return 0;
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