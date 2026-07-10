#include <bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k){
    vector<int> res;
    deque<int> dq;
    //1st window
    for (int i=0; i<k; i++){
        while (!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();
        dq.push_back(i);
    }
    for (int i=k; i<nums.size(); i++){
        res.push_back(nums[dq.front()]);
        //remove elements not part of current window
        while (!dq.empty() && dq.front()<=i-k) dq.pop_front();
        //remove elements smaller than current element
        while (!dq.empty() && nums[dq.back()]<=nums[i]) dq.pop_back();
        dq.push_back(i);
    }
    if (!dq.empty()) res.push_back(nums[dq.front()]);
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