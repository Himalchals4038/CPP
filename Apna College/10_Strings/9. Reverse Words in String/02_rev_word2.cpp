#include <bits/stdc++.h>
using namespace std;
string revStr(string str){
    stringstream ss(str);
    string word, ans = "";
    vector<string> words;
    while(ss>>word) words.push_back(word);

    for(int i=words.size()-1; i>=0; i--){
        ans += words[i];
        if(i>0) ans += " ";
    }
    return ans;
}
int main(){
    string str1= "a good   example";
    cout<<"Reversed String: "<<revStr(str1)<<endl;
    return 0;
}