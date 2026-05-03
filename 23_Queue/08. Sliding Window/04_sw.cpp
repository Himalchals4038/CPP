#include <bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k){
    vector<int> res;
    int n = nums.size();
    for (int i=0; i<n-k+1; i++){
        int max = INT_MIN;
        for (int j=i; j<i+k; j++){
            if (nums[j]>max) max = nums[j];
        }
        res.push_back(max);
    }
    return res;
}
int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> res = maxSlidingWindow(nums,k);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}