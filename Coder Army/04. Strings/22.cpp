#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
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
    cout<<"Original: "<<s<<", Sorted: "<<sortVowel(s)<<endl;
    s = "LeEtcOode"; // Test with mixed case
    cout<<"Original: "<<s<<", Sorted: "<<sortVowel(s)<<endl;
    s = "OaeEIioAUu"; // Test with all vowels
    cout<<"Original: "<<s<<", Sorted: "<<sortVowel(s)<<endl;
    return 0;
}