#include <bits/stdc++.h>
using namespace std;
class DisjointSetUnion{
    vector<int> par, rank;
public:
    DisjointSetUnion(int n){
        par.resize(n);
        rank.resize(n, 0);
        for (int i=0; i<n; i++) par[i] = i;
    }
    int find(int u){
        if (par[u] == u) return u;
        return par[u] = find(par[u]);
    }
    void unionByRank(int u, int v){
        int parU = find(u);
        int parV = find(v);
        if (parU == parV) return;
        if (rank[parU] < rank[parV]) par[parU] = parV;
        else if (rank[parV] < rank[parU]) par[parV] = parU;
        else{
            par[parV] = parU;
            rank[parU]++;
        }
    }
};

void kruskalMST(vector<vector<pair<int, int>>> &adj){
    int v = adj.size();
    vector<tuple<int, int, int>> edges; //wt, u, v
    for (int i=0; i<v; i++){
        for (const auto& edge : adj[i]){
            int u = i;
            int neighbor = edge.first;
            int wt = edge.second;
            if (u < neighbor) { // Avoid duplicate edges
                edges.push_back({wt, u, neighbor});
            }
        }
    }
    sort(edges.begin(), edges.end());
    
    DisjointSetUnion dsu(v);
    for (const auto& edge : edges){
        int wt = get<0>(edge);
        int u = get<1>(edge);
        int neighbor = get<2>(edge);
        if (dsu.find(u) != dsu.find(neighbor)) {
            dsu.unionByRank(u, neighbor);
            cout<<"Edge: "<<u<<" - "<<neighbor<<" Weight: "<<wt<<endl;
        }
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