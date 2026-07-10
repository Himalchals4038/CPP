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
    bool isCycleDFS(int src, vector<bool> &vis, vector<bool> &recPath){
        vis[src] = true;
        recPath[src] = true;
        for (int nbr : l[src]){
            if (!vis[nbr]){
                if(isCycleDFS(nbr, vis, recPath)) return true;
            }
            else if (recPath[nbr]) return true;
        }
        recPath[src] = false;
        return false;
    }
    bool isCycle(){
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);
        for (int i=0; i<V; i++){
            if (!vis[i]){
                if (isCycleDFS(i, vis, recPath)) return true;
            }
        }
        return false;
    }
};
int main(){
    Graph g1(4);
    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.addEdge(3, 1);
    cout<<"Graph 1 has cycle: "<<(g1.isCycle() ? "Yes" : "No")<<endl;

    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(1, 3);
    g2.addEdge(2, 3);
    cout<<"Graph 2 has cycle: "<<(g2.isCycle() ? "Yes" : "No")<<endl;

    Graph g3(6);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(3, 4);
    g3.addEdge(4, 5);
    cout<<"Graph 3 has cycle: "<<(g3.isCycle() ? "Yes" : "No")<<endl;

    Graph g4(5);
    g4.addEdge(0, 1);
    g4.addEdge(2, 3);
    g4.addEdge(3, 4);
    cout<<"Graph 4 has cycle: "<<(g4.isCycle() ? "Yes" : "No")<<endl;

    Graph g5(3);
    g5.addEdge(0, 1);
    g5.addEdge(1, 0);
    cout<<"Graph 5 has cycle: "<<(g5.isCycle() ? "Yes" : "No")<<endl;
    return 0;
}