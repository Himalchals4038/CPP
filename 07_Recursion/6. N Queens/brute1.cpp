#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<string> &board, int row, int col, int n){
    int i,j;
    for (i=row; i>=0; i--){
        if (board[i][col]=='Q') return false;
    }
    for (i=row, j=col; i>=0 && j>=0; i--, j--){
        if (board[i][j]=='Q') return false;
    }
    for (i=row, j=col; i>=0 && j<n; i--, j++){
        if (board[i][j]=='Q') return false;
    }
    return true;
}
void queens(vector<string> &board, int n, int row, vector<vector<string>> &ans){
    if (row==n){
        ans.push_back(board);
        return;
    }
    for (int j=0;j<n;j++){
        if (isSafe(board, row, j, n)){
            board[row][j] = 'Q';
            queens(board, n, row+1, ans);
            board[row][j] = '.';
        }
    }
}
vector<vector<string>> nQueens(int n){
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    queens(board, n, 0, ans);
    return ans;
}
int main(){
    int n;
    cout<<"Enter number of queens: ";
    cin>>n;
    vector<vector<string>> ans = nQueens(n);
    for (vector<string> val : ans){
        for (string str : val){
            cout<<str<<endl;
        }
        cout<<endl;
    }
    return 0;
}