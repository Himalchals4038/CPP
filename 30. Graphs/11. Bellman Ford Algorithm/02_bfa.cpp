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
    queue<int> q;
    vector<bool> inQueue(n, false);
    vector<int> count(n, 0);

    q.push(src);
    inQueue[src] = true;
    count[src] = 1;

    while (!q.empty()){
        int u = q.front();
        q.pop();
        inQueue[u] = false;

        for (const Edge &e : g[u]){
            if (dist[u] != INT_MAX && dist[u]+e.wt < dist[e.v]){
                dist[e.v] = dist[u]+e.wt;
                if (!inQueue[e.v]){
                    q.push(e.v);
                    inQueue[e.v] = true;
                    count[e.v]++;
                    if (count[e.v] >= n){
                        cout<<"Negative weight cycle detected!"<<endl;
                        return;
                    }
                }
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