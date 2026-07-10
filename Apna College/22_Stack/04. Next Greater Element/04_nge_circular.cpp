#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &vec){
    vector<int> ans(vec.size(),-1);
    stack<int> st;
    for (int i=2*vec.size()-1; i>=0; i--){
        int current_idx = i%vec.size();
        int current_val = vec[current_idx];
        while (!st.empty() && current_val >= st.top()) st.pop();
        if (!st.empty()) ans[current_idx] = st.top();
        st.push(current_val);
    }
    return ans;
}
int main(){
    vector<int> vec = {6, 8, 0, 1, 3};
    vector<int> ans = nextGreaterElement(vec);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;

    vector<int> vec2 = {1, 2, 1};
    vector<int> ans2 = nextGreaterElement(vec2);
    copy(ans2.begin(), ans2.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}