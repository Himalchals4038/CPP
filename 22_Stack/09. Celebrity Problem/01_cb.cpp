#include <bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>> vec){
    int n = vec.size();
    stack<int> st;
    for (int i=0; i<n; i++) st.push(i);
    while (st.size()>1){
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        if (vec[a][b] == 1) st.push(b);
        else st.push(a);
    }
    int ans = st.top();
    for (int i=0; i<n; i++){
        if (i!=ans && (vec[ans][i] == 1 || vec[i][ans] == 0)) return -1;
    }
    return ans;
}
int main(){
    vector<vector<int>> vec = {{1, 0, 1, 0}, {0, 1, 1, 0}, {0, 0, 0, 0}, {0, 1, 1, 1}};
    cout<<celebrity(vec);
    return 0;
}