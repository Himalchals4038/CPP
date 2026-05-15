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
    bool detect_cycle_undirected(int src){
        vector<bool> visited(V, false);
        queue<pair<int, int>> q;
        q.push({src, -1});
        visited[src] = true;
        while (!q.empty()){
            int curr = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (int nbr : l[curr]){
                if (!visited[nbr]){
                    visited[nbr] = true;
                    q.push({nbr, curr});
                }
                else if (nbr != parent) return true;
            }
        }
        return false;
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(3,2);
    g.addEdge(2,4);
    if (g.detect_cycle_undirected(0)) cout << "Cycle Detected!" << endl;
    else cout << "No Cycle Detected." << endl;
    return 0;
}