#include <bits/stdc++.h>
using namespace std;
vector<int> waveDisplay(vector<vector<int>> &vec){
    if (vec.empty() || vec[0].empty()) return {};

    int rows = vec.size();
    int cols = vec[0].size();
    vector<int> res;
    res.reserve(rows * cols);

    for (int j=0; j<cols; j++){
        if (j%2 == 0){
            for (int i=0; i<rows; i++) res.push_back(vec[i][j]);
        }
        else{
            for (int i=rows-1; i>=0; i--) res.push_back(vec[i][j]);
        } 
    }
    return res;
}
int main(){
    vector<vector<int>> vec = {{1, 2, 3, 11}, {4, 5, 6, 12}, {7, 8, 9, 13}, {10, 14, 15, 16}};
    vector<int> res = waveDisplay(vec);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}