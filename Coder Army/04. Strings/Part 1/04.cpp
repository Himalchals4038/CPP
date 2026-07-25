#include <bits/stdc++.h>
using namespace std;
// bool isPalindrome(string s){
//     int n = s.size();
//     for (int i=0; i<n/2; i++){
//         if (s[i] != s[n-1-i]) return false;
//     }
//     return true;
// }
bool isPalindrome(string s){
    int start = 0, end = s.size()-1;
    while (start < end){
        if (s[start] != s[end]) return false;
        start++, end--;
    }
    return true;
}
int main(){
    string s1 = "racecar";
    cout<<isPalindrome(s1)<<endl;
    string s2 = "hello";
    cout<<isPalindrome(s2)<<endl;
    string s3 = "madam";
    cout<<isPalindrome(s3)<<endl;
    return 0;
}