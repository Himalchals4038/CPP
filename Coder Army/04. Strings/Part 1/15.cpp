#include <bits/stdc++.h>
using namespace std;
vector<int> countCapitalSmall(string s){
    vector<int> ans(2, 0);
    for (char c : s){
        if (c >= 'A' && c <= 'Z') ans[0]++;
        else if (c >= 'a' && c <= 'z') ans[1]++;
    }
    return ans;
}
int main(){
    string s = "Hello World";
    vector<int> ans = countCapitalSmall(s);
    cout<<"Capital letters: "<<ans[0]<<endl;
    cout<<"Small letters: "<<ans[1]<<endl;
    return 0;
}