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
    void dfsIslands(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &vis, int n, int m){
        if (i<0 || i>=n || j<0 || j>=m || vis[i][j] || grid[i][j] == '0') return;
        vis[i][j] = true;
        dfsIslands(i+1, j, grid, vis, n, m);
        dfsIslands(i-1, j, grid, vis, n, m);
        dfsIslands(i, j+1, grid, vis, n, m);
        dfsIslands(i, j-1, grid, vis, n, m);
    }
    int numIslands(vector<vector<char>> &grid){
        int islands = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (!vis[i][j] && grid[i][j] == '1'){
                    dfsIslands(i, j, grid, vis, n, m);
                    islands++;
                }
            }
        }
        return islands;
    }
};
int main(){
    
    return 0;
}