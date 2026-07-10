#include <bits/stdc++.h>
using namespace std;

int find(int u, vector<int> &par){
    if (par[u] == u) return u;
    return par[u] = find(par[u], par);
}

bool unionByRank(int u, int v, vector<int> &par, vector<int> &rank){
    int parU = find(u, par);
    int parV = find(v, par);
    if (parU == parV) return false;
    if (rank[parU] < rank[parV]) par[parU] = parV;
    else if (rank[parV] < rank[parU]) par[parV] = parU;
    else{
        par[parV] = parU;
        rank[parU]++;
    }
    return true;
}

int findCircleNum(vector<vector<int>>& isConnected){
    int n = isConnected.size();
    vector<int> par(n), rank(n, 0);
    for (int i=0; i<n; i++) par[i] = i;
    int count = n;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++) if (isConnected[i][j] && unionByRank(i, j, par, rank)) count--;
    }
    return count;
}

int main(){
    vector<vector<int>> isConnected = {{1,1,0},{1,1,0},{0,0,1}};
    cout<<findCircleNum(isConnected)<<endl;
    return 0;
}