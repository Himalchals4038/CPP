#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>> &board, int row, int col, char val){
    //horizontal
    for (int j=0;j<9;j++){
        if (board[row][j]==(val)) return false;
    }
    //vertical
    for (int i=0;i<9;i++){
        if (board[i][col]==(val)) return false;
    }
    //grid
    int srow = (row/3) * 3;
    int scol = (col/3) * 3;
    for (int i=srow;i<=srow+2;i++){
        for (int j=scol;j<=scol+2;j++){
            if (board[i][j]==(val)) return false;
        }
    }
    return true;
}
bool solver(vector<vector<char>> &board, int row, int col){
    if (row==9) return true;
    int nextRow = row, nextCol = col+1;
    if (nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }
    if (board[row][col] != '.'){
        return solver(board,nextRow,nextCol);
    }
    for (char i='1';i<='9';i++){
        if (isSafe(board, row, col, i)){
            board[row][col] = char(i);
            if (solver(board,nextRow,nextCol)) return true;
            board[row][col] = '.';
        }
    }
    return false;
}
void sudokuSolver(vector<vector<char>> &board){
    solver(board, 0, 0);
}
int main(){
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    sudokuSolver(board);
    for (vector<char> val : board){
        for (char str : val){
            cout<<str<<" ";
        }
        cout<<endl;
    }
    return 0;
}