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
    void dfs(vector<vector<int>> &image, int i, int j, int newColor, int oldColor){
        if (i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]!=oldColor) return;
        image[i][j] = newColor;
        dfs(image, i-1, j, newColor, oldColor);
        dfs(image, i, j-1, newColor, oldColor);
        dfs(image, i+1, j, newColor, oldColor);
        dfs(image, i, j+1, newColor, oldColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color){
        int oldColor = image[sr][sc];
        if (oldColor == color) return image;
        dfs(image, sr, sc, color, oldColor);
        return image;
    }
};
int main(){
    
    return 0;
}