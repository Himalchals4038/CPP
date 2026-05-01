#include <bits/stdc++.h>
using namespace std;
vector<int> rightSmallerNearest(vector<int> &vec){
    int n = vec.size();
    vector<int> ans(n, n);
    stack<int> st;
    for (int i=n-1; i>=0; i--){
        while (!st.empty() && vec[i] <= vec[st.top()]) st.pop();
        if (st.empty()) ans[i] = n;
        else ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
vector<int> leftSmallerNearest(vector<int> &vec){
    int n = vec.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i=0; i<n; i++){
        while (!st.empty() && vec[i] <= vec[st.top()]) st.pop();
        if (st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
int largestRectangleArea(vector<int> &heights){
    int n = heights.size();
    vector<int> left = leftSmallerNearest(heights), right = rightSmallerNearest(heights);
    int ans = 0;
    for (int i=0; i<n; i++){
        int width = right[i]-left[i]-1;
        int height = heights[i];
        ans = max(ans, width*height);
    }
    return ans;
}
int main(){
    vector<int> heights = {2, 4};
    cout<<largestRectangleArea(heights)<<endl;
    return 0;
}