#include <iostream>
#include <vector>

using namespace std;

class Solution{
private:
    // Helper function to check if it's safe to place 'c' at board[row][col]
    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        for (int i = 0; i < 9; i++){
            // Check row
            if (board[row][i] == c) return false;
            // Check column
            if (board[i][col] == c) return false;
            // Check 3x3 subgrid
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
        }
        return true;
    }

    bool solve(vector<vector<char>>& board){
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[0].size(); j++){
                
                // Find an empty cell
                if (board[i][j] == '.'){
                    
                    // Try digits from '1' to '9'
                    for (char c = '1'; c <= '9'; c++){
                        
                        // 1. CONSTRAINT CHECK: Is it safe to place 'c'?
                        if (isValid(board, i, j, c)){
                            
                            // 2. MAKE THE CHOICE
                            board[i][j] = c;

                            // 3. RECURSE to solve the rest of the board
                            if (solve(board)) return true;

                            // 4. BACKTRACK (Undo the choice if it leads to a dead end)
                            board[i][j] = '.';
                        }
                    }
                    
                    // If no number from 1-9 works, trigger backtracking
                    return false; 
                }
            }
        }
        // If no empty cells are left, the puzzle is solved
        return true; 
    }

public:
    void solveSudoku(vector<vector<char>>& board){
        solve(board);
    }
};

int main(){
    vector<vector<char>> board ={
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

    Solution solver;
    solver.solveSudoku(board);

    cout<<"Solved Sudoku Board:\n";
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}