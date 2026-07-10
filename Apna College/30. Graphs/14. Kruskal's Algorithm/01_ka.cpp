#include <bits/stdc++.h>
using namespace std;
void kruskalMST(vector<vector<pair<int, int>>> &adj){
    int v = adj.size();
    vector<tuple<int, int, int>> edges; //wt, u, v
    for (int i=0; i<v; i++){
        for (int j=0; j<adj[i].size(); j++){
            int u = i;
            int v = adj[i][j].first;
            int wt = adj[i][j].second;
            edges.push_back({wt, u, v});
        }
    }
    sort(edges.begin(), edges.end());
    for (int i=0; i<edges.size(); i++){
        int wt = get<0>(edges[i]);
        int u = get<1>(edges[i]);
        int v = get<2>(edges[i]);
        cout<<"Edge: "<<u<<" - "<<v<<" Weight: "<<wt<<endl;
    }
}
int main(){
    int v = 4;
    vector<vector<pair<int, int>>> adj(v);
    adj[0].push_back({1, 10});
    adj[1].push_back({0, 10});

    adj[0].push_back({3, 30});
    adj[3].push_back({0, 30});

    adj[0].push_back({2, 15});
    adj[2].push_back({0, 15});

    adj[1].push_back({3, 40});
    adj[3].push_back({1, 40});

    adj[2].push_back({3, 50});
    adj[3].push_back({2, 50});
    kruskalMST(adj);
    return 0;
}