#include <bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){
    vector<pair<int, int>> graph[n];
    for (int i=0; i<flights.size(); i++){
        int u = flights[i][0];
        int v = flights[i][1];
        int wt = flights[i][2];
        graph[u].push_back({v, wt});
    }

    queue<pair<int, pair<int, int>>> q; //node, (cost, stops)
    q.push({src, {0, -1}});
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    while(!q.empty()){
        auto val = q.front();
        int node = val.first;
        int cost = val.second.first;
        int stops = val.second.second;
        q.pop();

        for (auto nbr : graph[node]){
            int v = nbr.first;
            int wt = nbr.second;
            if (cost+wt<dist[v] && stops<k){
                dist[v] = cost+wt;
                q.push({v, {cost+wt, stops+1}});
            }
            else if (cost+wt<dist[v] && stops==k && v==dst){
                dist[v] = cost+wt;
            }
        }
    }
    if (dist[dst] == INT_MAX) return -1;
    return dist[dst];
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