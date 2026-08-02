#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subSeq(vector<int> &arr, int index){
    if (index == arr.size()) return {{}};
    vector<vector<int>> res = subSeq(arr, index + 1);
    int currSize = res.size();
    for (int i=0;i<currSize;i++){
        vector<int> temp = res[i];
        temp.push_back(arr[index]);
        res.push_back(temp);
    }
    return res;
}
void printSubSeq(vector<int> &arr){
    vector<vector<int>> res = subSeq(arr, 0);
    for (int i=0;i<res.size();i++){
        for (int j=0;j<res[i].size();j++) cout<<res[i][j]<<" ";
        cout<<"\n";
    }
}
int main(){
    vector<int> arr = {26, 15, 48};
    printSubSeq(arr);
    return 0;
}