#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(const string& pattern, vector<int>& lps){
    int m = pattern.length();
    lps.assign(m, 0);
    int length = 0;

    for (int i = 1; i < m; i++){
        while (length > 0 && pattern[i] != pattern[length]) length = lps[length - 1];
        if (pattern[i] == pattern[length]) length++;
        lps[i] = length;
    }
}

int stringMatch(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();

    if (n2 == 0) return 0;
    if (n1 == 0 || n2 > n1) return -1;
    vector<int> lps;
    computeLPSArray(s2, lps);

    int i = 0;
    int j = 0;
    while (i < n1){
        if (s2[j] == s1[i]){
            i++;
            j++;
        }
        if (j == n2) return i - j;
        else if (i < n1 && s2[j] != s1[i]){
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
    return -1;
}

int main(){
    string s1 = "Hello World";
    string s2 = "World";
    cout<<stringMatch(s1, s2)<<endl;
    cout<<stringMatch("AAAAABAAABA", "AAAA")<<endl;
    cout<<stringMatch("ABCABCDABABCDABCDABDE", "ABCDABD")<<endl;
    cout<<stringMatch("test", "test")<<endl;
    cout<<stringMatch("test", "tost")<<endl;
    cout<<stringMatch("abc", "")<<endl;
    cout<<stringMatch("", "abc")<<endl;
    cout<<stringMatch("aaaaa", "bba")<<endl;
    return 0;
}