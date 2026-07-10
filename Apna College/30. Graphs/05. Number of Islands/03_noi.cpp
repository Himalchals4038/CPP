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
    void dfsIslands(vector<vector<char>> &grid, int i, int j, int n, int m){
        if (i<0 || i>=n || j<0 || j>=m || grid[i][j] == '0') return;
        grid[i][j] = '0';
        dfsIslands(grid, i + 1, j, n, m); //Down
        dfsIslands(grid, i - 1, j, n, m); //Up
        dfsIslands(grid, i, j + 1, n, m); //Right
        dfsIslands(grid, i, j - 1, n, m); //Left
    }
    int numIslands(vector<vector<char>> &grid){
        if (grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j]=='1'){
                    count++;
                    dfsIslands(grid, i, j, n, m);
                }
            }
        }
        return count;
    }
};
int main(){
    
    return 0;
}