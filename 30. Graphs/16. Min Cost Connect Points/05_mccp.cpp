#include <bits/stdc++.h>
using namespace std;

int manDist(vector<vector<int>> points, int p1, int p2){
    int dist1 = abs(points[p1][0] - points[p2][0]);
    int dist2 = abs(points[p1][1] - points[p2][1]);
    return dist1 + dist2;
}

int minCostConnectPoints(vector<vector<int>> &points){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int n = points.size();
    vector<bool> vis(n, false);
    pq.push({0, 0});
    int cost = 0;
    while (!pq.empty()){
        int wt = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (!vis[u]){
            vis[u] = true;
            cost+=wt;
            for (int v=0; v<n; v++){
                if (!vis[v]){
                    int dist = manDist(points, u, v);
                    pq.push({dist, v});
                }
            }
        }
        else continue;
    }
    return cost;
}

int main(){
    
    return 0;
}