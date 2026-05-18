#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<vector<int>> &adj, vector<bool> &vis){
    vis[i] = true;
    for (int j=0; j<adj[i].size(); j++){
        if (adj[i][j] == 1 && !vis[j]) dfs(j, adj, vis);
    }
}

int minCostConnectPoints(vector<vector<int>>& points){
    int n = points.size();
    vector<array<int, 3>> edges;
    
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            int wt = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
            edges.push_back({wt, i, j});
        }
    }
    sort(edges.begin(), edges.end());

    int cost = 0;
    int edgesAdded = 0;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    
    for (auto& edge : edges){
        int wt = edge[0], u = edge[1], v = edge[2];
        vector<bool> vis(n, false);
        dfs(u, adj, vis);
        if (!vis[v]){
            adj[u][v] = 1;
            adj[v][u] = 1;
            cost += wt;
            if (++edgesAdded == n-1) break;
        }
    }
    return cost;
}

int main(){
    vector<vector<int>> points = {{0,0},{2,2},{3,10},{5,2},{7,0}};
    cout<<minCostConnectPoints(points)<<endl;

    points = {{3,12},{-2,5},{-4,1}};
    cout<<minCostConnectPoints(points)<<endl;
    return 0;
}