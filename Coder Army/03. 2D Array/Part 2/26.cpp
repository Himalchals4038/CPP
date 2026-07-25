#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> repeatFreq(vector<int> &vec){
    if (vec.empty()) return{};
    vector<vector<int>> ans;
    // unordered_map<int, int> m;
    map<int, int> m;
    for (int i=0; i<vec.size(); i++) m[vec[i]]++;
    for (auto it = m.begin(); it != m.end(); it++){
        ans.push_back({it->first, it->second});
    }
    return ans;
}
int main(){
    vector<int> vec1 = {1, 2, 4, 1, 5, 4, 1, 2, 3, 4, 5, 4};
    vector<vector<int>> ans = repeatFreq(vec1);
    for (int i=0; i<ans.size(); i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}