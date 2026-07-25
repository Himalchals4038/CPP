#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> repeatFreq(const vector<int> &vec){
    if (vec.empty()) return{};
    vector<vector<int>> ans;
    unordered_map<int, int> m;
    for (int num : vec) m[num]++;
    ans.reserve(m.size());
    for (const auto& pair : m){
        ans.push_back({pair.first, pair.second});
    }
    return ans;
}
int main(){
    vector<int> vec1 = {1, 2, 4, 1, 5, 4, 1, 2, 3, 4, 5, 4};
    vector<vector<int>> ans = repeatFreq(vec1);
    for (const auto& pair : ans){
        cout<<pair[0]<<" "<<pair[1]<<endl;
    }
    return 0;
}