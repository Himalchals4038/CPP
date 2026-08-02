#include <bits/stdc++.h>
using namespace std;
void subSeq(string &s, int index, int size, vector<string> &ans, string &temp){
    if (index == size){
        ans.push_back(temp);
        return;
    }
    temp.push_back(s[index]);
    subSeq(s, index + 1, size, ans, temp);
    temp.pop_back();
    subSeq(s, index + 1, size, ans, temp);
}
int main(){
    string s = "abc";
    vector<string> ans;
    string temp = "";
    subSeq(s, 0, s.size(), ans, temp);
    for (const string& sub : ans) cout<<(sub.empty() ? "[empty]" : sub)<<"\n";
    return 0;
}