#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ngeMap;
        stack<int> st;
        for (int i=nums2.size()-1; i>=0; i--){
            while (!st.empty() && nums2[i] >= st.top()) st.pop();
            if (st.empty()) ngeMap[nums2[i]] = -1;
            else ngeMap[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
        vector<int> ans1;
        for (int i:nums1){
            ans1.push_back(ngeMap[i]);
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