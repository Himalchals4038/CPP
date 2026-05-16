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
    void helper(int src, vector<bool> &vis, stack<int> &st){
        vis[src] = true;
        for (int nbr : l[src]) if (!vis[nbr]) helper(nbr, vis, st);
        st.push(src);
    }
    stack<int> topoSort(){
        vector<bool> vis(V, false);
        stack<int> st;
        for (int i=0; i<V; i++) if (!vis[i]) helper(i, vis, st);
        return st;
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
    stack<int> st1 = g1.topoSort();
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;

    Graph g2(6);
    g2.addEdge(0, 1);
    g2.addEdge(2, 3);
    g2.addEdge(4, 5);
    cout<<"Topological Sort for Graph 2 (Disconnected): ";
    stack<int> st2 = g2.topoSort();
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;

    Graph g3(3);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    cout<<"Topological Sort for Graph 3 (with Cycle): ";
    stack<int> st3 = g3.topoSort();
    while(!st3.empty()){
        cout<<st3.top()<<" ";
        st3.pop();
    }
    cout<<endl;

    Graph g4(4);
    g4.addEdge(0, 1);
    g4.addEdge(0, 2);
    g4.addEdge(1, 3);
    cout<<"Topological Sort for Graph 4: ";
    stack<int> st4 = g4.topoSort();
    while(!st4.empty()){
        cout<<st4.top()<<" ";
        st4.pop();
    }
    cout<<endl;
    return 0;
}