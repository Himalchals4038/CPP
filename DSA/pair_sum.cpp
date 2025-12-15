#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {11,15,14,7,20,39,2,1,8};
    vector<int> ans;
    int t = 9;
    for (int i=0;i<vec.size();i++){
        for (int j=i+1;j<vec.size();j++){
            if (vec[i]+vec[j]==t) {
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
            }
        }
    }
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}