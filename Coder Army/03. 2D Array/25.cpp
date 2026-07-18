#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> repeatFreq(vector<int> &vec){
    vector<vector<int>> ans;
    for (int i=0; i<vec.size(); i++){
        int freq = 0;
        for (int j=0; j<vec.size(); j++){
            if (vec[i] == vec[j]) freq++;
        }
        ans.push_back({vec[i], freq});
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