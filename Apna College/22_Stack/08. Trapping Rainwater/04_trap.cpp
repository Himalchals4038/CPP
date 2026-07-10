#include <bits/stdc++.h>
using namespace std;
int trapRainwater (vector<int> &height){
    int n = height.size();
    vector<int> left(n,0), right(n,0);

    left[0] = height[0]; //Left Max Value
    for (int i=1; i<n; i++) left[i] = max(left[i-1], height[i]);

    right[n-1] = height[n-1]; //Right Max Value
    for (int i=n-2; i>=0; i--) right[i] = max(right[i+1], height[i]);

    int ans = 0;
    for (int i=0; i<n; i++) ans += min(left[i], right[i]) - height[i];
    return ans;
}
int main(){
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    // vector<int> height = {4, 2, 0, 3, 2, 5};
    cout << trapRainwater(height);
    return 0;
}