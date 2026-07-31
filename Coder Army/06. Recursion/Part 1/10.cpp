#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowels(string s){
    if (s.empty()) return 0;
    int count = isVowel(s[0]) ? 1 : 0;
    return count + countVowels(s.substr(1));
}

int countVowelsEfficient(const string& s, int index) {
    if (index == s.length()) return 0;
    int count = isVowel(s[index]) ? 1 : 0;
    return count + countVowelsEfficient(s, index + 1);
}

int countVowels1(string s, int count){
    if (s.empty()) return count;
    if (isVowel(s[0])) return countVowels1(s.substr(1), count+1);
    return countVowels(s.substr(1));
}

int main(){
    string s1 = "Hello World";
    cout<<"Vowels in '"<<s1<<"':\n";
    cout<<"  Inefficient (substr): "<<countVowels(s1)<<endl;
    cout<<"  Efficient (index): "<<countVowelsEfficient(s1, 0)<<endl;
    cout<<"  Fixed tail-recursive: "<<countVowels1(s1, 0)<<endl;
    cout<<endl;
    return 0;
}