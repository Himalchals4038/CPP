#include <bits/stdc++.h>
using namespace std;

bool solver(vector<vector<char>> &board, vector<pair<int, int>> &empty, int idx, vector<int> &rowMask, vector<int> &colMask, vector<int> &boxMask) {
    if (idx == empty.size()) return true;
    
    int r = empty[idx].first;
    int c = empty[idx].second;
    int box = (r / 3) * 3 + (c / 3);

    for (int i = 0; i < 9; i++) {
        int mask = (1 << i);
        if (!((rowMask[r] & mask) || (colMask[c] & mask) || (boxMask[box] & mask))) {
            board[r][c] = (char)('1' + i);
            rowMask[r] |= mask;
            colMask[c] |= mask;
            boxMask[box] |= mask;

            if (solver(board, empty, idx + 1, rowMask, colMask, boxMask)) return true;

            // Backtrack
            rowMask[r] &= ~mask;
            colMask[c] &= ~mask;
            boxMask[box] &= ~mask;
            board[r][c] = '.';
        }
    }
    return false;
}

void sudokuSolver(vector<vector<char>> &board){
    vector<int> rowMask(9, 0), colMask(9, 0), boxMask(9, 0);
    vector<pair<int, int>> empty;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') {
                empty.push_back({i, j});
            } else {
                int val = board[i][j] - '1';
                int mask = (1 << val);
                rowMask[i] |= mask;
                colMask[j] |= mask;
                boxMask[(i / 3) * 3 + (j / 3)] |= mask;
            }
        }
    }
    solver(board, empty, 0, rowMask, colMask, boxMask);
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