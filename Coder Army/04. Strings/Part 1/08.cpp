#include <bits/stdc++.h>
using namespace std;
bool checkPangram(string s){
    int n = s.size();
    int frq[26] = {0};
    for (int i=0; i<n; i++) frq[s[i]-'a']++;
    for (int i=0; i<26; i++) if (frq[i]==0) return false;
    return true;
}
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout<<"Is 'thequickbrownfoxjumpsoverthelazydog' a pangram? "<<boolalpha<<checkPangram(s)<<endl;
    return 0;
}