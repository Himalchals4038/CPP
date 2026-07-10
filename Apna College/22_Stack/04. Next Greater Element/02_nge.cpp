#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextGreater(vector<int> &vec){
        vector<int> ans(vec.size(), -1);
        stack<int> st;
        for (int i=vec.size()-1; i>=0; i--){
            while (!st.empty() && vec[i] >= st.top()) st.pop();
            if (st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            st.push(vec[i]);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = nextGreater(nums2);
        vector<int> ans1;
        for (int i:nums1){
            auto id = find(nums2.begin(), nums2.end(), i);
            int ind = distance(nums2.begin(),id);
            ans1.push_back(ans[ind]);
        }
        return ans1;
    }
};
int main(){
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    Solution s;
    vector<int> ans = s.nextGreaterElement(nums1, nums2);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}