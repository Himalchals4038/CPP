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
    void dfsHelper(int src, vector<bool> &vis){
        vis[src] = true;
        cout<<src<<" ";
        for (int nei : l[src]){
            if (!vis[nei]) dfsHelper(nei, vis);
        }
    }
    void dfs(int src){
        vector<bool> vis(V, false);
        dfsHelper(src, vis);
        cout<<endl;
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.printAdjList();
    g.dfs(0);
    return 0;
}