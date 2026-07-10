#include <bits/stdc++.h>
using namespace std;
//Leetcode problem 1910
string removeOccur(string str, string part){
    int j=0;
    for (int i=0; i<str.length(); i++) {
        str[j] = str[i];
        j++;
        if (j>=part.length() && str.substr(j-part.length(), part.length())==part) j-=part.length();
    }
    return str.substr(0, j);
}
int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    cout<<removeOccur(str, part)<<endl;
    return 0;
}