#include <bits/stdc++.h>
using namespace std;
int largestSubarraySum(vector<int> &vec){
    if (vec.empty()) return 0;
    int maxSum = vec[0];
    int currentSum = vec[0];
    for (size_t i=1; i<vec.size(); ++i){
        currentSum = max(vec[i], currentSum+vec[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}
int main(){
    vector<int> vec = {1, -2, 3, 10, -4, 7, 2, -5};
    cout<<largestSubarraySum(vec);
    return 0;
}