#include <bits/stdc++.h>
using namespace std;

vector<int> previousSmallerElement(vector<int> &vec){
    vector<int> ans(vec.size(),-1);
    stack<int> st;
    for (int i=0;i<vec.size();i++){
        while (!st.empty() && vec[i]<=st.top()) st.pop();
        if (st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(vec[i]);
    }
    return ans;
}
int main(){
    vector<int> vec = {3, 1, 0, 8, 6};
    vector<int> ans = previousSmallerElement(vec);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    vector<int> vec1 = {5, 1, 7, 3, 6};
    vector<int> ans1 = previousSmallerElement(vec1);
    copy(ans1.begin(), ans1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}