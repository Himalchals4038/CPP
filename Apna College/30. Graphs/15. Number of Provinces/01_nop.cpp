#include <bits/stdc++.h>
using namespace std;
int findCircleNum(vector<vector<int>>& isConnected){
    int n = isConnected.size();
    vector<int> par(n), rank(n, 0);
    for (int i=0; i<n; i++) par[i] = i;

    function<int(int)> find = [&](int u){
        if (par[u] == u) return u;
        return par[u] = find(par[u]);
    };

    auto unionByRank = [&](int u, int v){
        int parU = find(u);
        int parV = find(v);
        if (parU == parV) return;
        if (rank[parU] < rank[parV]) par[parU] = parV;
        else if (rank[parV] < rank[parU]) par[parV] = parU;
        else{
            par[parV] = parU;
            rank[parU]++;
        }
    };

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) if (isConnected[i][j]) unionByRank(i, j);
    }

    int count = 0;
    for (int i=0; i<n; i++) if (par[i] == i) count++;
    return count;
}
int main(){
    vector<vector<int>> isConnected = {{1,1,0},{1,1,0},{0,0,1}};
    cout<<findCircleNum(isConnected)<<endl;
    return 0;
}