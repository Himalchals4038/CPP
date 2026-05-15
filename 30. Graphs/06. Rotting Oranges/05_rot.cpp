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
        int ans = 0;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<pair<int, int>, int>> q; //((i, j), time)

        //pushing rotten sources into q
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    vis[i][j] = true;
                }
            }
        }

        //BFS approach
        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;
            q.pop();
            ans = max(ans, time);
            //Top
            if (i-1>=0 && !vis[i-1][j] && grid[i-1][j] == 1){
                grid[i-1][j] = 2;
                q.push({{i-1, j}, time+1});
                vis[i-1][j] = true;
            }
            //Bottom
            if (i+1<n && !vis[i+1][j] && grid[i+1][j] == 1){
                grid[i+1][j] = 2;
                q.push({{i+1, j}, time+1});
                vis[i+1][j] = true;
            }
            //Left
            if (j-1>=0 && !vis[i][j-1] && grid[i][j-1] == 1){
                grid[i][j-1] = 2;
                q.push({{i, j-1}, time+1});
                vis[i][j-1] = true;
            }
            //Right
            if (j+1<m && !vis[i][j+1] && grid[i][j+1] == 1){
                grid[i][j+1] = 1;
                q.push({{i, j+1}, time+1});
                vis[i][j+1] = true;
            }
        }

        //Check for fresh orange
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j] == 1) return -1;
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}