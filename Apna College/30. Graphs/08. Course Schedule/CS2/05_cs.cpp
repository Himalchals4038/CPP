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
    bool isCycle(int src, vector<bool> &vis, vector<bool> &recPath, const vector<vector<int>> &edge){
        vis[src] = true;
        recPath[src] = true;
        for (int i=0; i<edge.size(); i++){
            int u = edge[i][1];
            int v = edge[i][0];
            if (u==src){
                if (!vis[v]){
                    if (isCycle(v, vis, recPath, edge)) return true;
                }
                else if (recPath[v]) return true;
            }
        }
        recPath[src] = false;
        return false;
    }
    void topoOrder(int src, vector<bool> &vis, stack<int> &st, const vector<vector<int>> edge){
        vis[src] = true;
        for (int i=0; i<edge.size(); i++){
            int u = edge[i][1];
            int v = edge[i][0];
            if (u==src){
                if (!vis[v]) topoOrder(v, vis, st, edge);
            }
        }
        st.push(src);
    }
    vector<int> findOrder(int n, const vector<vector<int>> &edge){
        vector<bool> vis(n, false);
        vector<bool> recPath(n, false);
        vector<int> ans;
        for (int i=0; i<n; i++){
            if (!vis[i]){
                if (isCycle(i, vis, recPath, edge)) return ans;
            }
        }
        stack<int> st;
        vis.assign(n, false);
        for (int i=0; i<n; i++){
            if (!vis[i]) topoOrder(i, vis, st, edge);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
int main(){
    
    return 0;
}