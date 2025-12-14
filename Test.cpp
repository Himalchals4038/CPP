#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec1(2,0);
        int a=0;
        for (int i=0;i<(sizeof(nums)/sizeof(nums[0]));i++){
            for (int j=0;j<(sizeof(nums)/sizeof(nums[0]));j++){
                if (j==i) continue;
                if ((nums[i]+nums[j])==target){
                    a=1;
                    vec1.push_back(i);
                    vec1.push_back(j);
                    break;
                }
            }
            if (a==1) break;
        }
        return vec1;
    }
};
int main(){
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = Solution.twoSum(nums,target);
    return 0;
}