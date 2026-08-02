#include <bits/stdc++.h>
using namespace std;
void findSubsetSums(vector<int> &vec, int n, int index, int sum, vector<int> &ans){
    if(index == n){
        ans.push_back(sum);
        return;
    }
    findSubsetSums(vec, n, index + 1, sum + vec[index], ans);
    findSubsetSums(vec, n, index + 1, sum, ans);
}
vector<int> helper(vector<int> &vec){
    vector<int> ans;
    findSubsetSums(vec, vec.size(), 0, 0, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int> vec = {1, 2, 3};
    vector<int> ans = helper(vec);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}