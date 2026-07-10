#include <bits/stdc++.h>
using namespace std;

int dfs(int node, int dst, int edges, const vector<vector<pair<int, int>>>& graph, vector<vector<int>>& memo){
    if (node == dst) return 0;
    if (edges == 0) return 1e9;
    if (memo[node][edges] != -1) return memo[node][edges];
    
    int minCost = 1e9;
    for (auto& nbr : graph[node]){
        int nextNode = nbr.first;
        int weight = nbr.second;
        int cost = dfs(nextNode, dst, edges-1, graph, memo);
        if (cost != 1e9) minCost = min(minCost, cost + weight);
    }
    return memo[node][edges] = minCost;
}

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){
    vector<vector<pair<int, int>>> graph(n);
    for (auto &f : flights) graph[f[0]].push_back({f[1], f[2]});

    vector<vector<int>> memo(n, vector<int>(k+2,-1));
    int ans = dfs(src, dst, k+1, graph, memo);
    return ans >= 1e9 ? -1 : ans;
}

int main(){
    vector<vector<int>> flights = {{0,1,100}, {1,2,100}, {0,2,500}};
    int n = 3, src = 0, dst = 2, k = 1;
    cout<<findCheapestPrice(n, flights, src, dst, k)<<endl;

    flights = {{0,1,100},{1,2,100},{0,2,500}};
    n = 3, src = 0, dst = 2, k = 0;
    cout<<findCheapestPrice(n, flights, src, dst, k)<<endl;

    flights = {{0,1,10},{1,2,10},{2,0,10},{1,3,1},{3,4,10},{4,0,10}};
    n = 5, src = 0, dst = 4, k = 1;
    cout<<findCheapestPrice(n, flights, src, dst, k)<<endl;
    return 0;
}