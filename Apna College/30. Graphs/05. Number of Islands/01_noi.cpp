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
    int numIslands(vector<vector<char>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j]=='1'){
                    count++;
                    queue<pair<int, int>> q;
                    q.push({i ,j});
                    grid[i][j] = '0';
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for (int k=-1; k<=1; k++){
                            for (int l=-1; l<=1; l++){
                                if (x+k>=0 && x+k<n && y+l>=0 && y+l<m && grid[x+k][y+l]=='1'){
                                    q.push({x+k, y+l});
                                    grid[x+k][y+l] = '0';
                                }
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
int main(){
    
    return 0;
}