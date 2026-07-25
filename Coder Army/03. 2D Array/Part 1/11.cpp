#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n){
    vector<vector<int>> ans(n,vector<int>(n,0));
    int top = 0, bottom = n-1, left = 0, right = n-1, val = 1;
    while (top <= bottom && left <= right){
        for (int i = left; i <= right; i++) ans[top][i] = val++;
        top++;
        for (int i = top; i <= bottom; i++) ans[i][right] = val++;
        right--; 
        if (top <= bottom){
            for (int i = right; i >= left; i--) ans[bottom][i] = val++;
            bottom--; 
        }
        if (left <= right){
            for (int i = bottom; i >= top; i--) ans[i][left] = val++;
            left++; 
        }
    }
    return ans;
}
int main(){
    int n = 6;
    vector<vector<int>> matrix = generateMatrix(n);
    for (const auto& row : matrix){
        copy(row.begin(), row.end(), ostream_iterator<int>(cout, "\t"));
        cout << endl;
    }
    return 0;
}