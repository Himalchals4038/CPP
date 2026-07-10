#include <bits/stdc++.h>
using namespace std;
void printSubsets(vector<int> &vec, vector<int> &ans, int i){
    if (i==vec.size()){
        for (int val : ans) cout<<val<<" ";
        cout<<endl;
        return;
    }
    ans.push_back(vec[i]);
    printSubsets(vec,ans,i+1);
    ans.pop_back(); //backtrack
    printSubsets(vec,ans,i+1);
}
int main(){
    vector<int> vec = {1,2,3};
    vector<int> ans;
    printSubsets(vec,ans,0);
    return 0;
}