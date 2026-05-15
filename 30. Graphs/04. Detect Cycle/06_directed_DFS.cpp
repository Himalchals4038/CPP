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
    bool detect_cycle(int src, vector<bool> &visited, vector<bool> &recStack){
        stack<pair<int, list<int>::iterator>> s;
        visited[src] = true;
        recStack[src] = true;
        s.push({src, l[src].begin()});
        while (!s.empty()){
            int u = s.top().first;
            list<int>::iterator& it = s.top().second;
            if (it == l[u].end()){
                s.pop();
                recStack[u] = false;
                continue;
            }
            int v = *it;
            ++it;
            if (!visited[v]){
                visited[v] = true;
                recStack[v] = true;
                s.push({v, l[v].begin()});
            }
            else if (recStack[v]) return true;
        }
        return false;
    }
    bool hasCycleDirected(){
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);
        for (int i=0; i<V; ++i){
            if (!visited[i]){
                if (detect_cycle(i, visited, recStack)) return true;
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
    cout<<"Graph 1 has cycle: "<<(g1.hasCycleDirected() ? "Yes" : "No")<<endl;

    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(1, 3);
    g2.addEdge(2, 3);
    cout<<"Graph 2 has cycle: "<<(g2.hasCycleDirected() ? "Yes" : "No")<<endl;

    Graph g3(6);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(3, 4);
    g3.addEdge(4, 5);
    cout<<"Graph 3 has cycle: "<<(g3.hasCycleDirected() ? "Yes" : "No")<<endl;

    Graph g4(5);
    g4.addEdge(0, 1);
    g4.addEdge(2, 3);
    g4.addEdge(3, 4);
    cout<<"Graph 4 has cycle: "<<(g4.hasCycleDirected() ? "Yes" : "No")<<endl;
    return 0;
}