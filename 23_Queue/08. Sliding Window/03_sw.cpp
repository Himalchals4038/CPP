#include <bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k){
    int n = nums.size();
    if (n==0 || k==0) return {};
    deque<int> window;
    vector<int> res;
    res.reserve(n-k+1);
    for (int i=0; i<n; i++){
        window.push_back(nums[i]);
        if (window.size()>k) window.pop_front();
        if (window.size()==k) res.push_back(*max_element(window.begin(), window.end()));
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