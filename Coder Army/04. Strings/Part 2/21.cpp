#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
string sortVowel(string &s){
    string temp = "";
    for (char c : s) if (isVowel(c)) temp += c;
    sort(temp.begin(), temp.end());
    int vowelIndex = 0;
    for (int i=0; i<s.length(); i++){
        if (isVowel(s[i])) s[i] = temp[vowelIndex++];
    }
    return s;
}
int main(){
    string s = "leetcode";
    cout<<sortVowel(s)<<endl;
    return 0;
}