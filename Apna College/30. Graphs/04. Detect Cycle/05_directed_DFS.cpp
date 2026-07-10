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
    bool detectCycleDirDFS(int src, vector<bool> &visited, vector<bool> &recStack){
        visited[src] = true;
        recStack[src] = true;
        for (int nbr : l[src]){
            if (!visited[nbr]){
                if (detectCycleDirDFS(nbr, visited, recStack)) return true;
            }
            else if (recStack[nbr]) return true;
        }
        recStack[src] = false;
        return false;
    }
    bool detectCycle(){
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);
        for (int i=0; i<V; ++i){
            if (!visited[i]){
                if (detectCycleDirDFS(i, visited, recStack)) return true;
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
    cout<<"Graph 1 has cycle: "<<(g1.detectCycle() ? "Yes" : "No")<<endl;

    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(1, 3);
    g2.addEdge(2, 3);
    cout<<"Graph 2 has cycle: "<<(g2.detectCycle() ? "Yes" : "No")<<endl;

    Graph g3(6);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(3, 4);
    g3.addEdge(4, 5);
    cout<<"Graph 3 has cycle: "<<(g3.detectCycle() ? "Yes" : "No")<<endl;

    Graph g4(5);
    g4.addEdge(0, 1);
    g4.addEdge(2, 3);
    g4.addEdge(3, 4);
    cout<<"Graph 4 has cycle: "<<(g4.detectCycle() ? "Yes" : "No")<<endl;
    return 0;
}