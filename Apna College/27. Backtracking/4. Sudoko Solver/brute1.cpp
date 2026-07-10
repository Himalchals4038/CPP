#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<string>> &board, int row, int col, int val){
    for (int i=0;i<9;i++){
        if (board[row][i]==to_string(val)) return false;
    }
    for (int i=0;i<9;i++){
        if (board[i][col]==to_string(val)) return false;
    }
    int startRow = row - row%3;
    int startCol = col - col%3;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (board[i+startRow][j+startCol]==to_string(val)) return false;
        }
    }
    return true;
}
bool solver(vector<vector<string>> &board, int row, int col){
    if (row==9) return true;
    int nextRow = row, nextCol = col+1;
    if (nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }
    if (board[row][col] != "."){
        return solver(board,nextRow,nextCol);
    }
    for (int i=1;i<=9;i++){
        if (isSafe(board, row, col, i)){
            board[row][col] = to_string(i);
            if (solver(board,nextRow,nextCol)) return true;
            board[row][col] = ".";
        }
    }
    return false;
}
void sudokuSolver(vector<vector<string>> &board){
    solver(board, 0, 0);
}
int main(){
    vector<vector<string>> board = {{"5","3",".",".","7",".",".",".","."},{"6",".",".","1","9","5",".",".","."},{".","9","8",".",".",".",".","6","."},{"8",".",".",".","6",".",".",".","3"},{"4",".",".","8",".","3",".",".","1"},{"7",".",".",".","2",".",".",".","6"},{".","6",".",".",".",".","2","8","."},{".",".",".","4","1","9",".",".","5"},{".",".",".",".","8",".",".","7","9"}};
    sudokuSolver(board);
    for (vector<string> val : board){
        for (string str : val){
            cout<<str<<" ";
        }
        cout<<endl;
    }
    return 0;
}