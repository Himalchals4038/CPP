#include <bits/stdc++.h>
using namespace std;
string capitalize_substr(string s){
    if (s.empty()) return "";
    return (char)toupper(s[0]) + capitalize_substr(s.substr(1));
}

string capitalize_index(const string& s, int index) {
    if (index == s.length()) return "";
    return (char)toupper(s[index]) + capitalize_index(s, index + 1);
}

void capitalize_inplace(string& s, int index) {
    if (index == s.length()) return;
    s[index] = toupper(s[index]);
    capitalize_inplace(s, index + 1);
}

string capitalize1(const string& s, int index){
    if (index == s.length()) return "";
    char c = s[index];
    if (s[index] >= 'a' && s[index] <= 'z'){
        c = 'A' + (s[index] - 'a');
    }
    // return string(1, c) + capitalize1(s, index + 1);
    return c + capitalize1(s, index + 1);
}

int main(){
    string s1 = "hello";
    cout<<"Capitalized (substr): "<<capitalize_substr(s1)<<endl;
    cout<<"Capitalized (index):  "<<capitalize_index(s1, 0)<<endl;
    capitalize_inplace(s1, 0);
    cout<<"Capitalized (in-place): "<<s1<<endl;

    string s2 = "Pneumatic";
    cout<<"Capitalized (index): "<<capitalize1(s2, 0)<<endl;
    return 0;
}