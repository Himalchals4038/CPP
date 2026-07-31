#include <bits/stdc++.h>
using namespace std;
string reverseString(string s){
    if (s.length() <= 1) return s;
    return reverseString(s.substr(1)) + s[0];
}
string reverseString1(string s, int index){
    if (index == s.length()) return "";
    return reverseString1(s, index + 1) + s[index];
}
void reverseStringInPlace(string &s, int start, int end){
    if (start >= end) return;
    swap(s[start], s[end]);
    reverseStringInPlace(s, start + 1, end - 1);
}
int main(){
    string s1 = "hello";
    cout<<"Reversed '"<<s1<<"': "<<reverseString1(s1, 0)<<endl;
    string s2 = "notorious";
    cout<<"Reversed '"<<s2<<"': "<<reverseString(s2)<<endl;
    string s3 = "scrizophenia";
    reverseStringInPlace(s3, 0, s3.length() - 1);
    cout<<"Reversed s3: "<<s3<<endl;
    return 0;
}