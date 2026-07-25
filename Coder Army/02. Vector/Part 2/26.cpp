#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> equalSubarraySum(vector<int> &vec){
    if (vec.empty()) return {};
    long long totalSum = accumulate(vec.begin(), vec.end(), 0LL);
    long long leftSum = 0;
    for (int i=0; i<vec.size()-1; ++i){
        leftSum += vec[i];
        long long rightSum = totalSum-leftSum;
        if (leftSum == rightSum){
            vector<int> leftSubarray(vec.begin(), vec.begin()+i+1);
            vector<int> rightSubarray(vec.begin()+i+1, vec.end());
            return {leftSubarray, rightSubarray};
        }
    }
    return {};
}
int main(){
    vector<int> vec1 = {1, 5, 2, 8};
    vector<vector<int>> result = equalSubarraySum(vec1);
    for (const auto& subarray : result){
        for (int num : subarray){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}