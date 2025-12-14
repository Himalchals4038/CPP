#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i=n-1; i>=0;--i){
            if (digits[i]<9){
                ++digits[i];
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    std::vector<int> nums = {9,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,9,9};
    Solution sol;
    vector<int> so = sol.plusOne(nums);

    cout << '[';
    for (size_t i = 0; i < so.size(); ++i) {
        cout << so[i];
        if (i + 1 < so.size()) cout << ",";
    }
    cout << ']' << endl;
    return 0;
}

