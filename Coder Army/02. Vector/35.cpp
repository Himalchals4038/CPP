#include <bits/stdc++.h>
using namespace std;
int trapRainwaterOptimized(const vector<int> &heights) {
    int n = heights.size();
    if (n < 3) return 0;
    int left = 0, right = n-1;
    int left_max = 0, right_max = 0, ans = 0;
    while (left < right){
        if (heights[left] <= heights[right]) {
            left_max = max(left_max, heights[left]);
            ans += left_max - heights[left];
            left++;
        }
        else{
            right_max = max(right_max, heights[right]);
            ans += right_max - heights[right];
            right--;
        }
    }
    return ans;
}
int main(){
    vector<int> vec1 = {4, 2, 0, 5, 2, 6, 2, 3};
    cout << "Trapped Water: " << trapRainwaterOptimized(vec1) << endl;
    return 0;
}