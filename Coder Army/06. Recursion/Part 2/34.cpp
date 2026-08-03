#include <bits/stdc++.h>
using namespace std;
void generatePermutations(int index, vector<int> &vec, vector<vector<int>> &ans){
    if (index == vec.size()){
        ans.push_back(vec);
        return;
    }
    for (int i=index; i<vec.size(); i++){
        swap(vec[index], vec[i]);
        generatePermutations(index+1, vec, ans);
        swap(vec[index], vec[i]);
    }
}
vector<vector<int>> permutations(vector<int> &vec){
    vector<vector<int>> ans;
    generatePermutations(0, vec, ans);
    return ans;
}
int main(){
    vector<int> vec = {1, 2, 3};
    vector<vector<int>> ans = permutations(vec);
    for(const auto& p : ans){
        for(int num : p) cout<<num<<" ";
        cout<<"\n";
    }
    return 0;
}