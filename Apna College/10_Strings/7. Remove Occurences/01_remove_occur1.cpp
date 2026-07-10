#include <bits/stdc++.h>
using namespace std;
//Removes all occurrences of duplicate elements in the string
string convertToSetAndBack(string str) {
    set<char> s(str.begin(), str.end());
    return string(s.begin(), s.end());
}

int main(){
    string str1 = "daabaacbbcaadaaz";
    cout<<convertToSetAndBack(str1)<<endl;
    return 0;
}