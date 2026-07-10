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
    }
    void printAdjList(){
        for (int i=0; i<V; i++){
            cout<<i<<" -> ";
            for (int nbr : l[i]) cout<<nbr<<" ";
            cout<<endl;
        }
    }
    void dfs(vector<vector<int>> &image, int sr, int sc, int color, int oldColor, int rows, int cols, vector<vector<int>> &vis){
        vis[sr][sc] = 1;
        image[sr][sc] = color;
        vector<pair<int,int>> directions = {{-1,0}, {0,-1}, {1,0}, {0,1}};
        for (auto dir : directions){
            int newRow = sr + dir.first;
            int newCol = sc + dir.second;
            if (newRow>=0 && newRow<rows && newCol>=0 && newCol<cols && !vis[newRow][newCol] && image[newRow][newCol]==oldColor){
                dfs(image, newRow, newCol, color, oldColor, rows, cols, vis);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color){
        int rows = image.size();
        int cols = image[0].size();
        vector<vector<int>> vis(rows, vector<int>(cols, 0));
        int oldColor = image[sr][sc];
        dfs(image, sr, sc, color, oldColor, rows, cols, vis);
        return image;
    }        
};
int main(){
    
    return 0;
}