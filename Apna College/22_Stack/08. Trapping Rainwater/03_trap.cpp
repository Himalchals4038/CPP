#include <bits/stdc++.h>
using namespace std;
vector<int> leftMaxValue(vector<int> &vec){
    int n = vec.size();
    vector<int> ans(n,0);
    ans[0] = vec[0];
    for (int i=1; i<n; i++) ans[i] = max(ans[i-1], vec[i]);
    return ans;
}
vector<int> rightMaxValue (vector<int> &vec){
    int n = vec.size();
    vector<int> ans(n,0);
    ans[n-1] = vec[n-1];
    for (int i=n-2; i>=0; i--) ans[i] = max(ans[i+1], vec[i]);
    return ans;
}
int trapRainwater (vector<int> &height){
    int n = height.size();
    vector<int> left = leftMaxValue(height);
    vector<int> right = rightMaxValue(height);
    int ans = 0;
    for (int i=0; i<n; i++) ans += min(left[i], right[i]) - height[i];
    return ans;
}
int main(){
    // vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> height = {4, 2, 0, 3, 2, 5};
    cout << trapRainwater(height);
    return 0;
}