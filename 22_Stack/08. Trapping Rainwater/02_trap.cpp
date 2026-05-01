#include <bits/stdc++.h>
using namespace std;
int trapRainwater (vector<int> &height){
    int n = height.size(), left = 0, right = n-1;
    int ans = 0, leftMax = 0, rightMax = 0;
    while (left<right){
        if (height[left]<height[right]){
            leftMax = max(leftMax, height[left]);
            ans+=leftMax-height[left];
            left++;
        }
        else{
            rightMax = max(rightMax, height[right]);
            ans+=rightMax-height[right];
            right--;
        }
    }
    return ans;
}
int main(){
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trapRainwater(height);
    return 0;
}