#include <bits/stdc++.h>
using namespace std;
//Leetcode problem 1910
string removeOccur(string str, string part){
    while(str.length()>0 && str.find(part)<str.length()) str.erase(str.find(part), part.length());
    return str;
}
int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    cout<<removeOccur(str, part)<<endl;
    return 0;
}