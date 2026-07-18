#include <bits/stdc++.h>
using namespace std;
string defangeIP(string s){
    string ans = "";
    for (int i=0; i<s.size(); i++){
        if (s[i] == '.') ans += "[.]";
        else ans += s[i];
    }
    return ans;
}
int main(){
    string s = "1.1.1.1";
    cout<<defangeIP(s)<<endl;
    return 0;
}