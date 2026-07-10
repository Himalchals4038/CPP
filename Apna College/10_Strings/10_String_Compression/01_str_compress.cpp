#include <bits/stdc++.h>
using namespace std;
vector<char> stringCompress(vector<char> chars){
    int n = chars.size();
    vector<char> ans;
    int i = 0;
    while(i < n){
        int count = 0;
        char curr = chars[i];
        while(i < n && chars[i] == curr){
            count++;
            i++;
        }
        ans.push_back(curr);
        if(count>1) for(char c:to_string(count)) ans.push_back(c);
    }
    return ans;
}
int main(){
    vector<char> chars={'a','a','b','b','c','c','c','d','e','e','e','e','e','e','e','e','e','e','f'};
    vector<char> ans=stringCompress(chars);
    for(int i=0; i<ans.size(); i++){
        if(i>0 && !(isdigit(ans[i]) && isdigit(ans[i-1]))) cout<<" ";
        cout<<ans[i];
    }
    return 0;
}