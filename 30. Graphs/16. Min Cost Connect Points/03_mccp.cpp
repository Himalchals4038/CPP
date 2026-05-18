#include <bits/stdc++.h>
using namespace std;

int minCostConnectPoints(vector<vector<int>>& points){
    int n = points.size();
    int cost = 0;
    vector<int> minDist(n, INT_MAX);
    vector<bool> visited(n, false);
    minDist[0] = 0;

    for (int i=0; i<n; i++){
        int currMinEdge = INT_MAX;
        int currNode = -1;
        for (int j = 0; j < n; j++){
            if (!visited[j] && minDist[j] < currMinEdge){
                currMinEdge = minDist[j];
                currNode = j;
            }
        }

        cost += currMinEdge;
        visited[currNode] = true;

        for (int j=0; j<n; j++){
            if (!visited[j]) {
                int weight = abs(points[currNode][0] - points[j][0]) + abs(points[currNode][1] - points[j][1]);
                minDist[j] = min(minDist[j], weight);
            }
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