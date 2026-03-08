#include <bits/stdc++.h>
using namespace std;
void permute(string &str, int ind, vector<string> &ans){
    if (ind==str.size()){
        ans.push_back(str);
        return;
    }
    for (int i=ind; i<str.size(); i++){
        swap(str[i], str[ind]);
        permute(str, ind+1, ans);
        swap(str[i], str[ind]);
    }
    return;
}
vector<string> permCall(string &str){
    vector<string> ans;
    permute(str, 0, ans);
    return ans;
}
int main(){
    string str = "Fans";
    vector<string> ans = permCall(str);
    for (string val : ans){
        cout<<val<<endl;
    }
    return 0;
}