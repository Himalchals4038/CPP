#include <bits/stdc++.h>
using namespace std;
int primMST(const vector<vector<pair<int, int>>> &adj){
    int v = adj.size();
    vector<bool> inMST(v, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int mstCost = 0;
    pq.push({0, 0}); //wt, vertex
    while(!pq.empty()){
        auto p = pq.top();
        int wt = p.first;
        int u = p.second;
        pq.pop();
        if (!inMST[u]){
            inMST[u] = true;
            mstCost += wt;
            for (int i=0; i<adj[u].size(); i++){
                int v = adj[u][i].first;
                int edgeWt = adj[u][i].second;
                if (!inMST[v]) pq.push({edgeWt, v});
            }
        }
    }
    return mstCost;
}
int main(){
    int v = 4;
    vector<vector<pair<int, int>>> adj(v);
    adj[0].push_back({1, 10});
    adj[1].push_back({0, 10});

    adj[0].push_back({3, 30});
    adj[3].push_back({0, 30});

    adj[0].push_back({2, 15});
    adj[2].push_back({0, 15});

    adj[1].push_back({3, 40});
    adj[3].push_back({1, 40});

    adj[2].push_back({3, 50});
    adj[3].push_back({2, 50});
    cout<<primMST(adj)<<endl;
    return 0;
}