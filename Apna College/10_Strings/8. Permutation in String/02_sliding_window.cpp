#include <bits/stdc++.h>
using namespace std;
bool strPerm(string& st1, string& st2){
    if(st1.length()>st2.length()) return false;
    vector<int> count1(26,0), count2(26,0);
    
    for(int i=0; i<st1.length(); i++) {
        count1[st1[i]-'a']++;
        count2[st2[i]-'a']++;
    }
    if(count1==count2) return true;
    
    for(int i=st1.length(); i<st2.length(); i++) {
        count2[st2[i]-'a']++;
        count2[st2[i-st1.length()]-'a']--;
        if(count1==count2) return true;
    }
    return false;
}
int main(){
    string st1 = "ab", st2 = "eidabooo", st3 = "eidboaoo";
    cout<<"Is present(?): "<<(strPerm(st1,st2)?"Yes":"No")<<endl;
    cout<<"Is present(?): "<<(strPerm(st1,st3)?"Yes":"No")<<endl;
    return 0;
}