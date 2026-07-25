#include <bits/stdc++.h>
using namespace std;
vector<int> rightMax(vector<int> &vec){
    int max_num = INT_MIN;
    vector<int> ans(vec.size());
    for (int i=0; i<vec.size(); i++){
        max_num = max(max_num, vec[i]);
        ans[i] = max_num;
    }
    return ans;
}
int maxDiff(vector<int> &vec){
    vector<int> right = rightMax(vec);
    int ans = INT_MIN;
    for (int i=0; i<vec.size(); i++){
        ans = max(ans, right[i]-vec[i]);
    }
    return ans;
}
int main(){
    vector<int> vec1 = {9, 5, 8, 12, 2, 3, 7, 4};
    cout<<"Max Difference: "<<maxDiff(vec1);
    return 0;
}