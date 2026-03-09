#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &maze, int row, int col, string path, vector<string> &ans){
    int n = maze.size();
    if (row<0 || col<0 || row>=n || col>=n || maze[row][col]==0) return;
    if (row==n-1 && col==n-1){
        ans.push_back(path);
        return;
    }
    maze[row][col] = -1; //visit
    solve(maze,row+1,col,path+"D",ans);
    solve(maze,row-1,col,path+"U",ans);
    solve(maze,row,col+1,path+"R",ans);
    solve(maze,row,col-1,path+"L",ans);
    maze[row][col] = 1; //unvisit
    return;
}
vector<string> findPath(vector<vector<int>> &maze){
    vector<string> ans;
    if (maze.empty()) return ans;
    solve(maze, 0, 0, "", ans);
    return ans;
}
int main(){
    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans = findPath(maze);
    for (string str : ans){
        cout<<str<<" ";
        cout<<endl;
    }
    return 0;
}