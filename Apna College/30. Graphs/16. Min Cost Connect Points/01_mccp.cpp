#include <bits/stdc++.h>
using namespace std;

int minCostConnectPoints(vector<vector<int>>& points){
    int n = points.size();
    vector<int> par(n), rank(n, 0);
    for (int i=0; i<n; i++) par[i] = i;
    function<int(int)> find = [&](int u){
        if (par[u] == u) return u;
        return par[u] = find(par[u]);
    };

    auto unionByRank = [&](int u, int v){
        int parU = find(u);
        int parV = find(v);
        if (parU == parV) return false;
        if (rank[parU] < rank[parV]) par[parU] = parV;
        else if (rank[parV] < rank[parU]) par[parV] = parU;
        else{
            par[parV] = parU;
            rank[parU]++;
        }
        return true;
    };

    vector<array<int, 3>> edges;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            int wt = abs(points[i][0]-points[j][0]) + abs(points[i][1]-points[j][1]);
            edges.push_back({wt, i, j});
        }
    }
    
    sort(edges.begin(), edges.end());
    int cost = 0;
    for (auto &[wt, u, v] : edges) if (unionByRank(u, v)) cost += wt;
    return cost;
}

int main(){
    vector<vector<int>> points = {{0,0},{2,2},{3,10},{5,2},{7,0}};
    cout<<minCostConnectPoints(points)<<endl;

    vector<vector<int>> points = {{3,12},{-2,5},{-4,1}};
    cout<<minCostConnectPoints(points)<<endl;
    return 0;
}