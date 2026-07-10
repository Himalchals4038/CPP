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
void bellmanFord(vector<vector<Edge>> &g, int src){
    int n = g.size();
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    for (int i=0; i<n-1; i++){
        for (int u=0; u<n; u++){
            for (Edge e : g[u]){
                if (dist[e.v] > dist[u]+e.wt) dist[e.v] = dist[u]+e.wt;
            } 
        }
    }
    for (int u=0; u<n; u++){
        for (Edge e : g[u]){
            if (dist[e.v] > dist[u]+e.wt){
                cout<<"Negative weight cycle detected!"<<endl;
                return;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (dist[i] == INT_MAX) cout<<"Distance of node "<<i<<" from source "<<src<<" is: INF"<<endl;
        else cout<<"Distance of node "<<i<<" from source "<<src<<" is: "<<dist[i]<<endl;
    }
}
int main(){
    int v = 5;
    vector<vector<Edge>> g(v);
    g[0].push_back(Edge(1, 2));
    g[0].push_back(Edge(2, 4));

    g[1].push_back(Edge(4, -1));
    g[1].push_back(Edge(2, -4));

    g[2].push_back(Edge(3, 2));

    g[3].push_back(Edge(4, 4));

    g[4].push_back(Edge(3, 2));
    bellmanFord(g, 0);
    return 0;
}