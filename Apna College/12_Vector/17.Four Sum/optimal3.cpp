#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &vec, int n){
    int size = vec.size();
    if (size < 4) return {};
    unordered_map<long long, vector<pair<int, int>>> pair_sums;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            pair_sums[(long long)vec[i] + vec[j]].push_back({i, j});
        }
    }

    set<vector<int>> unique_quads;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            long long remaining = (long long)n - ((long long)vec[i] + vec[j]);
            if (pair_sums.count(remaining)) {
                for (const auto& p : pair_sums[remaining]) {
                    int k = p.first;
                    if (j < k) {
                        vector<int> quad = {vec[i], vec[j], vec[k], vec[p.second]};
                        sort(quad.begin(), quad.end());
                        unique_quads.insert(quad);
                    }
                }
            }
        }
    }
    
    vector<vector<int>> ans(unique_quads.begin(), unique_quads.end());
    return ans;
}
int main(){
    vector<int> vec = {-1,0,1,2,-1,-4,-2,5,3,-6,4};
    int n;
    cout<<"Enter Target: ";
    cin>>n;
    vector<vector<int>> ans = fourSum(vec,n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}