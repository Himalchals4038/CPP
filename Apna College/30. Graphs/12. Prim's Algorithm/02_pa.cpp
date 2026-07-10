#include <bits/stdc++.h>
using namespace std;
class Edge{
public:
    int v;
    int wt;
    Edge(int v, int wt){
        this->v = v;
        this->wt = wt;
    }
};
void primsAlgorithm(const vector<vector<Edge>> &g, int src){
    int n = g.size();
    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, false);
    dist[src] = 0;
    set<pair<int, int>> st;
    st.insert({0, src});
    while (!st.empty()){
        auto it = st.begin();
        int u = it->second;
        st.erase(it);
        visited[u] = true;
        for (const Edge &e : g[u]){
            if (!visited[e.v] && dist[e.v] > e.wt){
                if (dist[e.v] != INT_MAX) st.erase({dist[e.v], e.v});
                dist[e.v] = e.wt;
                st.insert({dist[e.v], e.v});
            }
        }
    }
    for (int i=0; i<n; i++){
        if (dist[i] == INT_MAX) cout<<"Node "<<i<<" is not reachable from source "<<src<<endl;
        else cout<<"Minimum weight edge to node "<<i<<" from source "<<src<<" is: "<<dist[i]<<endl;
    }
}
int main(){
    
    return 0;
}