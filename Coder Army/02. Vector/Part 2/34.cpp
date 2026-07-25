#include <bits/stdc++.h>
using namespace std;
int trapRainwater(vector<int> &heights){
    int n = heights.size();
    if(n < 3) return 0;
    vector<int> left(n), right(n);
    left[0] = heights[0];
    right[n-1] = heights[n-1];
    for (int i=1; i<n; i++){
        left[i] = max(left[i-1], heights[i]);
        right[n-i-1] = max(right[n-i], heights[n-i-1]);
    }
    int ans = 0;
    for (int i=0; i<n; i++){
        ans += min(left[i], right[i])-heights[i];
    }
    return ans;
}
int main(){
    vector<int> vec1 = {4, 2, 0, 5, 2, 6, 2, 3};
    cout<<"Trapped Water: "<<trapRainwater(vec1)<<endl;
    return 0;
}