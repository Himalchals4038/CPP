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
    void BreadthFirstSearch(int src){
        queue<int> q;
        bool* visited = new bool[V]{0};
        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cout<<curr<<" ";
            for (int nbr : l[curr]){
                if (!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout<<endl;
        delete [] visited;
    }
    void DepthFirstSearch(int src){
        stack<int> st;
        bool* visited = new bool[V]{0};
        st.push(src);
        visited[src] = true;
        while(!st.empty()){
            int curr = st.top();
            st.pop();
            cout<<curr<<" ";
            for (int nbr : l[curr]){
                if (!visited[nbr]){
                    st.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout<<endl;
        delete [] visited;
    }
    bool isCycleUndirBFS(int src, vector<bool> &vis){
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;
        while(!q.empty()){
            int curr = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (int nbr : l[curr]){
                if (!vis[nbr]){
                    vis[nbr] = true;
                    q.push({nbr, curr});
                }
                else if (nbr!=parent) return true;
            }
        }
        return false;
    }
    bool isCycle(int src){
        vector<bool> visited(V, false);
        for (int i=0; i<V; i++){
            if (!visited[i]) if (isCycleUndirBFS(i, visited)) return true;
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
    cout<<"Breadth First Search: "; g.BreadthFirstSearch(0);
    cout<<"Depth First Search: "; g.DepthFirstSearch(0);
    
    if (g.isCycle(0)) cout << "Cycle Detected!" << endl;
    else cout << "No Cycle Detected." << endl;
    return 0;
}