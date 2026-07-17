#include <bits/stdc++.h>
using namespace std;
vector<int> searchRowCol(const vector<vector<int>> &vec, int target){
    if (vec.empty() || vec[0].empty()) return {-1, -1};
    int rows = vec.size();
    int cols = vec[0].size();
    int row = 0, col = cols-1;
    while (row < rows && col >= 0){
        if (vec[row][col] == target) return {row, col};
        else if (vec[row][col] > target) col--;
        else row++;
    }
    return {-1, -1};
}
int main(){
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    vector<int> result = searchRowCol(matrix, 37);
    cout<<"Target 37 found at: ["<<result[0]<<", "<<result[1]<<"]"<<endl;
    result = searchRowCol(matrix, 100);
    cout<<"Target 100 found at: ["<<result[0]<<", "<<result[1]<<"]"<<endl;
    return 0;
}