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
void dijkstra(const vector<vector<Edge>> &g, int src){
    int n = g.size();
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    set<pair<int, int>> st;
    st.insert({0, src});
    while(!st.empty()){
        auto it = st.begin();
        int currDist = it->first;
        int u = it->second;
        st.erase(it);
        for (const Edge &edge : g[u]){
            int v = edge.v;
            int wt = edge.wt;
            if (currDist+wt < dist[v]){
                if (dist[v]!=INT_MAX) st.erase({dist[v], v});
                dist[v] = currDist+wt;
                st.insert({dist[v], v});
            }
        }
    }
    for (int i=0; i<n; i++){
        if (dist[i] == INT_MAX) cout<<"Distance of node "<<i<<" from source "<<src<<" is: INF"<<endl;
        else cout<<"Distance of node "<<i<<" from source "<<src<<" is: "<<dist[i]<<endl;
    }
}
int main(){
    int v = 6;
    vector<vector<Edge>> g(v);
    g[0].push_back(Edge(1, 2));
    g[0].push_back(Edge(2, 4));

    g[1].push_back(Edge(2, 1));
    g[1].push_back(Edge(3, 7));

    g[2].push_back(Edge(4, 3));

    g[3].push_back(Edge(5, 1));

    g[4].push_back(Edge(3, 2));
    g[4].push_back(Edge(5, 5));
    dijkstra(g, 0);
    return 0;
}