#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    ~Graph(){
        delete [] l;
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void printAdjList(){
        for (int i=0; i<V; i++){
            cout<<i<<" -> ";
            for (int nbr : l[i]) cout<<nbr<<" ";
            cout<<endl;
        }
    }
    void orangesDfs(const vector<vector<int>>& grid, int r, int c, int time, vector<vector<int>>& timeGrid){
        int n = grid.size();
        int m = grid[0].size();
        if (r<0 || r>=n || c<0 || c>=m || grid[r][c]==0 || time>=timeGrid[r][c]) return;
        timeGrid[r][c] = time;
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};
        for (int i = 0; i<4; ++i){
            orangesDfs(grid, r+delRow[i], c+delCol[i], time+1, timeGrid);
        }
    }
    int orangesRotting(vector<vector<int>> &grid){
        if (grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> timeGrid(n, vector<int>(m, INT_MAX));
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j] == 2){
                    orangesDfs(grid,i,j,0,timeGrid);
                }
            }
        }
        int maxTime = 0;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j] == 1){
                    if (timeGrid[i][j] == INT_MAX) return -1;
                    maxTime = max(maxTime, timeGrid[i][j]);
                }
            }
        }
        return maxTime;
    }
};
int main(){
    Graph g(0);
    vector<vector<int>> grid1 = {{2,1,1},{1,1,0},{0,1,1}};
    cout << "Time to rot all oranges: " << g.orangesRotting(grid1) << endl;
    vector<vector<int>> grid2 = {{2,1,1},{0,1,1},{1,0,1}};
    cout << "Time to rot all oranges: " << g.orangesRotting(grid2) << endl;
    vector<vector<int>> grid3 = {{0,2}};
    cout << "Time to rot all oranges: " << g.orangesRotting(grid3) << endl;
    return 0;
}