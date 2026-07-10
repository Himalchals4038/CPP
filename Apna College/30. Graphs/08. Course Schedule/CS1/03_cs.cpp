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
    bool isCycle(int src, vector<bool> &vis, vector<bool> &recPath, vector<vector<int>> &edge){
        vis[src] = true;
        recPath[src] = true;
        for (int i=0; i<edge.size(); i++){
            int u = edge[i][1];
            int v = edge[i][0];
            if (u==src){
                if (!vis[v]){
                    if (isCycle(v, vis, recPath, edge)) return true;
                }
                else if (recPath[v]) return true;
            }
        }
        recPath[src] = false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>> &edge){
        vector<bool> vis(n, false);
        vector<bool> recPath(n, false);
        for (int i=0; i<n; i++){
            if (!vis[i]){
                if (isCycle(i, vis, recPath, edge)){
                    return false;
                }
            }
        }
        return true;
    }
};
int main(){
    
    return 0;
}