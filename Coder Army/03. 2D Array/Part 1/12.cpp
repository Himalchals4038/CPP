#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>> &vec){
    if (vec.empty() || vec[0].empty()) return {};
    int rows = vec.size();
    int cols = vec[0].size();
    vector<vector<int>> res(cols, vector<int>(rows));
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            res[j][i] = vec[i][j];
        }
    }
    return res;
}
int main(){
    vector<vector<int>> vec1 = {{1, 3, 5, 7}, {2, 4, 6, 8}, {9, 11, 13, 15}, {10, 12, 14, 16}};
    vector<vector<int>> res = transpose(vec1);
    for (int i=0; i<res.size(); i++){
        copy(res[i].begin(), res[i].end(), ostream_iterator<int>(cout, " "));
        cout<<"\n";
    }
    return 0;
}