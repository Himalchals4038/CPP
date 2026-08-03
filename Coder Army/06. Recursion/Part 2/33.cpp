#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> permutations(vector<int> &vec){
    vector<vector<int>> ans;
    if(vec.size()==0){
        ans.push_back({});
        return ans;
    }
    if (vec.size()==1){
        ans.push_back(vec);
        return ans;
    }
    
    int first=vec[0];
    vector<int> rest;
    for(int i=1;i<vec.size();i++) rest.push_back(vec[i]);
    vector<vector<int>> restPerm = permutations(rest);
    
    for(int i=0; i<restPerm.size(); i++){
        vector<int> temp=restPerm[i];
        for(int j=0;j<=temp.size();j++){
            temp.insert(temp.begin()+j,first);
            ans.push_back(temp);
            temp.erase(temp.begin()+j, temp.begin()+j+1);
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {1, 2, 3};
    vector<vector<int>> ans = permutations(vec);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++) cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}