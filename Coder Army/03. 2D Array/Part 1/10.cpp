#include <bits/stdc++.h>
using namespace std;
vector<int> spiralView(vector<vector<int>> &vec){
    vector<int> res;
    int rows = vec.size(), cols = vec[0].size();
    int row = 0, col = 0;
    while (row<rows & col<cols){
        // left to right
        for (int i=col; i<cols; i++) res.push_back(vec[row][i]);
        row++;
        // top to bottom
        for (int i=row; i<rows; i++) res.push_back(vec[i][cols-1]);
        cols--;
        // right to left
        if (row<rows){
            for (int i=cols-1; i>=col; i--) res.push_back(vec[rows-1][i]);
            rows--;
        }
        // bottom to top
        if (col<cols){
            for (int i=rows-1; i>=row; i--) res.push_back(vec[i][col]);
            col++;
        }
    }
    return res;
}
int main(){
    vector<vector<int>> vec1 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> res = spiralView(vec1);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    return 0;
}