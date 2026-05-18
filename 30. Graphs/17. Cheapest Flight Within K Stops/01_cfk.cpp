#include <bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){
    vector<vector<pair<int, int>>> graph(n);
    for (auto &f : flights) graph[f[0]].push_back({f[1], f[2]});

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({0, src, 0});

    while (!pq.empty()){
        auto top = pq.top();
        pq.pop();
        int cost = top[0];
        int node = top[1];
        int stops = top[2];

        if (node == dst) return cost;
        if (stops > k) continue;

        for (auto &nbr : graph[node]) pq.push({cost + nbr.second, nbr.first, stops + 1});
    }
    return -1;
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