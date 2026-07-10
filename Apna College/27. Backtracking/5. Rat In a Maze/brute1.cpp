#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans){
    if (row<0 || col<0 || row>=maze.size() || col>=maze[0].size() || maze[row][col]==0) return;

    if (row==maze.size()-1 && col==maze[0].size()-1){
        ans.push_back(path);
        return;
    }

    maze[row][col] = 0;
    solve(maze, row+1, col, path+"D", ans); //down
    solve(maze, row, col+1, path+"R", ans); //right
    solve(maze, row, col-1, path+"L", ans); //left
    solve(maze, row-1, col, path+"U", ans); //up
    maze[row][col] = 1;
    return;
}
vector<string> findPath(vector<vector<int>> &maze){
    vector<string> ans;
    if (maze.empty()) return ans;
    solve(maze, 0, 0, "", ans);
    return ans;
}
int main(){
    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
    vector<string> ans = findPath(maze);
    for (string str : ans) cout<<str<<" ";
    return 0;
}