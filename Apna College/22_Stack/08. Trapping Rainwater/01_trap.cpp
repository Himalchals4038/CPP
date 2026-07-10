#include <bits/stdc++.h>
using namespace std;
int trapRainwater (vector<int> &height){
    int n = height.size();
    int res = 0;
    vector<int> leftMax(n), rightMax(n);
    leftMax[0] = height[0];
    for (int i=1; i<n; i++) leftMax[i] = max(leftMax[i-1], height[i]);
    rightMax[n-1] = height[n-1];
    for (int i=n-2; i>=0; i--) rightMax[i] = max(rightMax[i+1], height[i]);
    for (int i=0; i<n; i++) res += min(leftMax[i], rightMax[i]) - height[i];
    return res;
}
int main(){
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trapRainwater(height);
    return 0;
}