#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> equalSubarraySum(vector<int> &vec){
    if (vec.empty()) return {};
    long long totalSum = accumulate(vec.begin(), vec.end(), 0LL);
    long long leftSum = 0;
    for (int i=0; i<vec.size(); ++i){
        long long rightSum = totalSum-leftSum-vec[i];
        if (leftSum == rightSum){
            vector<int> leftSubarray(vec.begin(), vec.begin()+i);
            vector<int> rightSubarray(vec.begin()+i+1, vec.end());
            return {leftSubarray, rightSubarray};
        }
        leftSum += vec[i];
    }
    return {};
}
int main(){
    vector<int> vec1 = {2, 3, 4, 1, 4};
    vector<vector<int>> result = equalSubarraySum(vec1);
    for (const auto& subarray : result){
        for (int num : subarray){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}