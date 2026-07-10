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
void primsAlgorithm(vector<vector<Edge>> &g, int src){
    int n = g.size();
    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, false);
    dist[src] = 0;
    for (int i=0; i<n-1; i++){
        int u = -1;
        for (int j=0; j<n; j++){
            if (!visited[j] && (u == -1 || dist[j] < dist[u])) u = j;
        }
        visited[u] = true;
        for (Edge e : g[u]){
            if (!visited[e.v] && dist[e.v] > e.wt) dist[e.v] = e.wt;
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