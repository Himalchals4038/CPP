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
private:
    void topoSortDFSUtil(int src, vector<bool> &vis, stack<int> &st){
        vis[src] = true;
        for (int nbr : l[src]) if (!vis[nbr]) topoSortDFSUtil(nbr, vis, st);
        st.push(src);
    }
public:
    void topologicalSortDFS(){
        vector<bool> vis(V, false);
        stack<int> st;
        for (int i=0; i<V; i++) if (!vis[i]) topoSortDFSUtil(i, vis, st);
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
    void topologicalSortBFS(){
        vector<int> indegree(V, 0);
        for (int i=0; i<V; i++) for (int nbr : l[i]) indegree[nbr]++;
        queue<int> q;
        for (int i=0; i<V; i++) if (indegree[i] == 0) q.push(i);
        vector<int> result;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            result.push_back(curr);
            for (int nbr : l[curr]){
                indegree[nbr]--;
                if (indegree[nbr] == 0) q.push(nbr);
            }
        }
        if (result.size() != V) cout<<"Graph has a cycle, topological sort not possible."<<endl;
        else{
            for (int node : result) cout<<node<<" ";
            cout << endl;
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
    g1.topologicalSortBFS();

    Graph g2(6);
    g2.addEdge(0, 1);
    g2.addEdge(2, 3);
    g2.addEdge(4, 5);
    cout<<"Topological Sort for Graph 2 (Disconnected): ";
    g2.topologicalSortBFS();

    Graph g3(3);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    cout<<"Topological Sort for Graph 3 (with Cycle): ";
    g3.topologicalSortBFS();

    Graph g4(4);
    g4.addEdge(0, 1);
    g4.addEdge(0, 2);
    g4.addEdge(1, 3);
    cout<<"Topological Sort for Graph 4: ";
    g4.topologicalSortBFS();
    return 0;
}