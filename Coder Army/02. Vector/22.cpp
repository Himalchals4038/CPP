#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subArray(vector<int> &vec){
    vector<vector<int>> ans;
    for(int i=0;i<vec.size();i++){
        vector<int> temp;
        for(int j=i;j<vec.size();j++){
            temp.push_back(vec[j]);
            ans.push_back(temp);
        }
    }
    return ans;
}
int main(){
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<vector<int>> res1 = subArray(vec1);
    for(int i=0;i<res1.size();i++){
        for(int j=0;j<res1[i].size();j++){
            cout<<res1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}