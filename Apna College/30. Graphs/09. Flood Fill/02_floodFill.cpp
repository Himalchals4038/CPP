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
    void dfs(vector<vector<int>> &image, int sr, int sc, int color, int oldColor, int rows, int cols){
        image[sr][sc] = color;
        int dr[] = {-1,0,1,0};
        int dc[] = {0,-1,0,1};
        for (int i=0; i<4; i++){
            int newRow = sr + dr[i];
            int newCol = sc + dc[i];
            if (newRow>=0 && newRow<rows && newCol>=0 && newCol<cols && image[newRow][newCol]==oldColor){
                dfs(image, newRow, newCol, color, oldColor, rows, cols);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color){
        int oldColor = image[sr][sc];
        if (oldColor == color) return image;
        int rows = image.size();
        int cols = image[0].size();
        dfs(image, sr, sc, color, oldColor, rows, cols);
        return image;
    }
};
int main(){
    
    return 0;
}