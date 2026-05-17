#include <bits/stdc++.h>
using namespace std;
int primMST(const vector<vector<pair<int, int>>> &adj){
    int v = adj.size();
    vector<int> key(v, INT_MAX);
    vector<bool> inMST(v, false);
    key[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    int mstWeight = 0;
    while (!pq.empty()){
        auto [weight, u] = pq.top();
        pq.pop();
        if (inMST[u]) continue;
        inMST[u] = true;
        mstWeight += weight;
        for (const auto &[v, wt] : adj[u]){
            if (!inMST[v] && wt < key[v]){
                key[v] = wt;
                pq.push({key[v], v});
            }
        }
    }
    return mstWeight;
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
    return 0;
}