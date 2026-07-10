#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &vec){
    vector<int> ans(vec.size(), -1);
    stack<int> st;
    for (int i=vec.size()-1; i>=0; i--){
        while (!st.empty() && vec[i] >= st.top()) st.pop();
        if (st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        // if (!st.empty()) ans[i] = st.top();
        st.push(vec[i]);
    }
    return ans;
}
int main(){
    vector<int> vec = {6, 8, 0, 1, 3};
    vector<int> ans = nextGreaterElement(vec);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}