#include <bits/stdc++.h>
using namespace std;
int repeatedStringMatch(string a, string b){
    if (a.empty()) return -1;
    string temp = a;
    int count = 1;
    while (temp.size() < b.size()){
        temp += a;
        count++;
    }
    if (temp.find(b) != string::npos) return count;
    temp += a;
    if (temp.find(b) != string::npos) return count + 1;
    return -1;
}
int main(){
    cout<<"a = \"abcd\", b = \"cdabcdab\": "<<repeatedStringMatch("abcd", "cdabcdab")<<endl; // Expected: 3
    cout<<"a = \"a\", b = \"aa\": "<<repeatedStringMatch("a", "aa")<<endl; // Expected: 2
    cout<<"a = \"a\", b = \"a\": "<<repeatedStringMatch("a", "a")<<endl; // Expected: 1
    cout<<"a = \"abc\", b = \"caba\": "<<repeatedStringMatch("abc", "caba")<<endl; // Expected: -1
    return 0;
}