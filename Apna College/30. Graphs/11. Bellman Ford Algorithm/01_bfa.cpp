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
void bellmanFord(const vector<vector<Edge>> &g, int src){
    int n = g.size();
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;
    for (int i=0; i<n-1; i++){
        bool updated = false;
        for (int u=0; u<n; u++){
            for (const Edge &e : g[u]){
                if (dist[u] != INT_MAX && dist[u]+e.wt < dist[e.v]){
                    dist[e.v] = dist[u]+e.wt;
                    updated = true;
                }
            }
        }
        if (!updated) break;
    }
    for (int u=0; u<n; u++){
        for (const Edge &e : g[u]){
            if (dist[u] != INT_MAX && dist[u]+e.wt < dist[e.v]){
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
    
    return 0;
}