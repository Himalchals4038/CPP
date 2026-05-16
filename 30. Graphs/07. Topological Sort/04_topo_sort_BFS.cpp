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
    void topoSort(){
        vector<int> res;
        vector<int> indeg(V, 0);
        for (int u=0; u<V; u++){
            for (int v : l[u]) indeg[v]++;
        }
        queue<int> q;
        for (int i=0; i<V; i++) if (indeg[i]==0) q.push(i);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            res.push_back(curr);
            for (int nbr : l[curr]){
                indeg[nbr]--;
                if (indeg[nbr]==0) q.push(nbr);
            }
        }
        if (res.size() != V) cout<<"Graph has a cycle."<<endl;
        else{
            for (int node : res) cout<<node<<" ";
            cout<<endl;
        }
    }
};
int main(){
    Graph g1(6);
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 3);
    g1.addEdge(2, 3);
    g1.addEdge(3, 4);
    g1.addEdge(3, 5);
    cout<<"Topological Sort for Graph 1: ";
    g1.topoSort();

    Graph g2(6);
    g2.addEdge(0, 1);
    g2.addEdge(2, 3);
    g2.addEdge(4, 5);
    cout<<"Topological Sort for Graph 2 (Disconnected): ";
    g2.topoSort();

    Graph g3(3);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    cout<<"Topological Sort for Graph 3 (with Cycle): ";
    g3.topoSort();
    return 0;
}