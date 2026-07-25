#include <bits/stdc++.h>
using namespace std;
vector<int> repeatFreq(vector<int> &vec){
    vector<int> ans;
    map<int, int> m;
    for (int i=0; i<vec.size(); i++){
        m[vec[i]]++;
    }
    // for (auto i : m){
    //     ans.push_back(i.second);
    // }
    for (auto [num, count] : m){
        ans.push_back(count);
    }
    return ans;
}
int main(){
    vector<int> vec1 = {1, 2, 4, 1, 5, 4, 1, 2, 3, 4, 5, 4};
    vector<int> ans = repeatFreq(vec1);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}