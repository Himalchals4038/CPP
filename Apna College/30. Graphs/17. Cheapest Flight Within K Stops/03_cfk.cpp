#include <bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k){
    vector<int> dist(n, 1e9);
    dist[src] = 0;

    for (int i = 0; i <= k; i++){
        vector<int> temp = dist;
        for (auto& flight : flights){
            int u = flight[0], v = flight[1], w = flight[2];
            if (dist[u] != 1e9 && dist[u]+w<temp[v]){
                temp[v] = dist[u]+w;
            }
        }
        dist = temp;
    }
    return dist[dst] == 1e9 ? -1 : dist[dst];
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