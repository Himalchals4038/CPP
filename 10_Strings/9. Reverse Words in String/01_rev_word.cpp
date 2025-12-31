#include <bits/stdc++.h>
using namespace std;
string revStr(string str){
    reverse(str.begin(), str.end());
    int n = str.length();
    string ans;
    for(int i=0;i<n;i++){
        string word = "";
        while(i<n && str[i]!=' '){
            word+=str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length()>0) {
            if (ans.length() > 0) ans += " ";
            ans += word;
        }
    }
    return ans;
}
int main(){
    string str1= "the pen";
    cout<<"Reversed String: "<<revStr(str1)<<endl;
    return 0;
}