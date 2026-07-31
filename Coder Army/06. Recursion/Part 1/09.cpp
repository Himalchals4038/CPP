#include <bits/stdc++.h>
using namespace std;
bool helper(string s, int i, int j){
    if(i>=j) return true;
    else{
        if(s[i] == s[j]) return helper(s, i+1, j-1);
        else return false;
    }
}
bool checkPalindrome(string s){
    return helper(s, 0, s.length()-1);
}
int main(){
    string s1 = "abcba";
    cout<<checkPalindrome(s1)<<endl;
    string s2 = "abcda";
    cout<<checkPalindrome(s2)<<endl;
    string s3 = "a";
    cout<<checkPalindrome(s3)<<endl;
    return 0;
}