#include <bits/stdc++.h>
using namespace std;
string rotate2Clock(string s){
    if (s.length() == 0) return s;
    int n = s.length();
    string ans(n, ' ');
    for (int i=0; i<n-2; i++) ans[i+2] = s[i];
    for (int i=n-2; i<n; i++) ans[i-n+2] = s[i];
    return ans;
}
string rotate2AntiClock(string s){
    if (s.length() == 0) return s;
    int n = s.length();
    string ans(n, ' ');
    for (int i=2; i<n; i++) ans[i-2] = s[i];
    for (int i=0; i<2; i++) ans[n-2+i] = s[i];
    return ans;
}
bool checkStringRotated(string s1, string s2){
    if (s1.length() != s2.length()) return false;
    return (rotate2Clock(s1) == s2 || rotate2AntiClock(s1) == s2);
}
int main(){
    string s1 = "Amazon";
    string s2 = "azonAm";
    cout<<checkStringRotated(s1, s2)<<endl;
    
    cout<<"Rotate Anti-Clockwise by 2: "<<endl;
    cout<<rotate2AntiClock(s1)<<endl;
    string s3 = s1;
    rotate(s3.begin(), s3.begin() + 2, s3.end());
    cout<<s3<<endl;

    cout<<"Rotate Clockwise by 2: "<<endl;
    cout<<rotate2Clock(s1)<<endl;
    string s4 = s1;
    rotate(s4.begin(), s4.begin() + s4.length() - 2, s4.end());
    cout<<s4<<endl;
    return 0;
}