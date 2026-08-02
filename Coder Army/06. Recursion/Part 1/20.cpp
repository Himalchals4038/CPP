#include <bits/stdc++.h>
using namespace std;
void subSeq(vector<int> &arr, int index, int size, vector<vector<int>> &ans, vector<int> &temp){
    if (index == size){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[index]);
    subSeq(arr, index + 1, size, ans, temp);
    temp.pop_back();
    subSeq(arr, index + 1, size, ans, temp);
}
int main(){
    vector<int> arr = {26, 15, 48};
    vector<vector<int>> ans;
    vector<int> temp;
    subSeq(arr, 0, arr.size(), ans, temp);
    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].size();j++) cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}