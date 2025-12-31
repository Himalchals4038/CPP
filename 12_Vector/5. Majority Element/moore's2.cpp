#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int> &nums){
        int count = 0, candidate = 0;
        for (int num : nums){
            if (count == 0) candidate = num;
            count += (num == candidate) ? 1 : -1;
        }
        count = 0;
        for (int num : nums) if (num == candidate) count++;
        if (count > nums.size()/2) return candidate;
        return -1;
    }
};
int main(){
    vector<int> vec = {1,2,3,2,2};
    Solution s1;
    cout << s1.majorityElement(vec);
    return 0;
}