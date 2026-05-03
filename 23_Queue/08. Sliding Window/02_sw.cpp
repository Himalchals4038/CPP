#include <bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k){
    int n = nums.size();
    if (n<1 || n>100000 || k<1 || k>n) return {};
    deque<int> dq;
    vector<int> res;
    res.reserve(n-k+1);
    for (int i=0; i<n; i++){
        if (nums[i]<-10000 || nums[i]>10000) return {};        
        if (!dq.empty() && dq.front() == i-k) dq.pop_front();
        while (!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
        dq.push_back(i);
        if (i>=k-1) res.push_back(nums[dq.front()]);
    }
    return res;
}
int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> res = maxSlidingWindow(nums,k);
    for (int i=0; i<res.size(); i++) cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}