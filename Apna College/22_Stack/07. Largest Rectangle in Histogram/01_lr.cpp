#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea (vector<int> &heights){
    int n = heights.size();
    stack<int> st;
    int ans = 0;
    for (int i=0; i<n; i++){
        while (!st.empty() && heights[st.top()] > heights[i]){
            int h = heights[st.top()];
            st.pop();
            int w = st.empty() ? i : i-st.top()-1;
            ans = max(ans, h*w);
        }
        st.push(i);
    }
    while (!st.empty()){
        int h = heights[st.top()];
        st.pop();
        int w = st.empty() ? n : n-st.top()-1;
        ans = max(ans, h*w);
    }
    return ans;
}
int main(){
    vector<int> heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights)<<endl;
    return 0;
}