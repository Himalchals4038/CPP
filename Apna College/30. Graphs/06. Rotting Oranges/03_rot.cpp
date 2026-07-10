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
    int orangesRotting(vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        int time = 0;
        queue<pair<int, int>> q;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j] == 2) q.push({i, j});
            }
        }
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};
        while(!q.empty()){
            int size = q.size();
            for(int k=0; k<size; k++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for (int i=0; i<4; i++){
                    int nRow = row+delRow[i];
                    int nCol = col+delCol[i];
                    if (nRow>=0 && nRow<n && nCol>=0 && nCol<m && grid[nRow][nCol] == 1){
                        grid[nRow][nCol] = 2;
                        q.push({nRow, nCol});
                    }
                }
            }
            time++;
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j] == 1) return -1;
            }
        }
        return time == 0 ? 0 : time-1;
    }
};
int main(){
    
    return 0;
}