#include <bits/stdc++.h>
using namespace std;
int trapRainwater (vector<int> &height){
    int ans = 0, left = 0, right = height.size()-1, leftMax = 0, rightMax = 0;
    while (left<right){
        leftMax = max(leftMax, height[left]);
        rightMax = max(rightMax, height[right]);
        if (leftMax < rightMax){
            ans += leftMax - height[left];
            left++;
        }
        else{
            ans += rightMax - height[right];
            right--;
        }
    }
    return ans;
}
int main(){
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    // vector<int> height = {4, 2, 0, 3, 2, 5};
    cout << trapRainwater(height);
    return 0;
}