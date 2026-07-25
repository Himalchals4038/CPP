#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findMostFrequent(const vector<int> &vec){
    if (vec.empty()) return{};
    unordered_map<int, int> m;
    for (int num : vec) m[num]++;
    int max_freq = 0;
    for (const auto& pair : m){
        if (pair.second > max_freq) max_freq = pair.second;
    }
    vector<vector<int>> result;
    for (const auto& pair : m){
        if (pair.second == max_freq) result.push_back({pair.first, pair.second});
    }
    return result;
}
int main(){
    vector<int> vec1 ={1, 2, 4, 2, 5, 2, 5, 1, 5};
    vector<vector<int>> ans = findMostFrequent(vec1);
    cout<<"Most frequent element(s):"<<endl;
    if (ans.size() == 1){
        cout<<"Number: "<<ans[0][0]<<", Frequency: "<<ans[0][1]<<endl;
    }
    else{
        for (const auto& pair : ans) cout<<"Number: "<<pair[0]<<", Frequency: "<<pair[1]<<endl;
    }
    return 0;
}