#include <bits/stdc++.h>
using namespace std;
vector<int> spiral(const vector<vector<int>>& vec){
    vector<int> ans;
    if(vec.empty()) return ans;
    int rows = vec.size();
    int cols = vec[0].size();
    ans.reserve(rows * cols);
    int srow = 0, scol = 0, erow = rows-1, ecol = cols-1;
    while(srow<=erow && scol<=ecol){
        for (int i=scol; i<=ecol; i++) ans.push_back(vec[srow][i]);
        srow++;
        for (int i=srow; i<=erow; i++) ans.push_back(vec[i][ecol]);
        ecol--;
        if (srow <= erow){
            for (int i=ecol; i>=scol; i--) ans.push_back(vec[erow][i]);
            erow--;
        }
        if (scol <= ecol){
            for (int i=erow; i>=srow; i--) ans.push_back(vec[i][scol]);
            scol++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> ans = spiral(vec);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}