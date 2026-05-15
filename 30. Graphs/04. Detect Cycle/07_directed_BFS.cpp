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
    bool hasCycleDirBFS(){
        vector<int> indegree(V, 0);
        for (int i=0; i<V; i++){
            for (int nbr : l[i]) indegree[nbr] += 1;
        }
        queue<int> q;
        for (int i=0; i<V; i++){
            if (indegree[i] == 0) q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            count += 1;
            for (int nbr : l[curr]){
                indegree[nbr] -= 1;
                if (indegree[nbr] == 0) q.push(nbr);
            }
        }
        if (count == V) return false;
        else return true;
    }
};
int main(){
    Graph g1(4);
    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.addEdge(3, 1);
    cout << "Graph 1 has cycle (BFS): " << (g1.hasCycleDirBFS() ? "Yes" : "No") << endl;

    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(1, 3);
    g2.addEdge(2, 3);
    cout << "Graph 2 has cycle (BFS): " << (g2.hasCycleDirBFS() ? "Yes" : "No") << endl;

    Graph g3(6);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(3, 4);
    g3.addEdge(4, 5);
    cout << "Graph 3 has cycle (BFS): " << (g3.hasCycleDirBFS() ? "Yes" : "No") << endl;
    return 0;
}