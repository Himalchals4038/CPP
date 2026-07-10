#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &heights){
    int n = heights.size();
    if (n == 0) return 0;
    stack<int> st;

    vector<int> left(n);
    for (int i=0; i<n; i++){
        while (!st.empty() && heights[st.top()] >= heights[i]) st.pop();
        left[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();

    vector<int> right(n);
    for (int i = n-1; i>=0; i--){
        while (!st.empty() && heights[st.top()] >= heights[i]) st.pop();
        right[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    int ans = 0;
    for (int i=0; i<n; i++) ans = max(ans, (right[i]-left[i]-1)*heights[i]);
    return ans;
}

int main(){
    vector<int> heights = {2, 4};
    cout<<largestRectangleArea(heights)<<endl;
    return 0;
}