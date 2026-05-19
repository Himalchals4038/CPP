#include <bits/stdc++.h>
using namespace std;
void tarjan(int node, vector<vector<int>>& graph, vector<int>& disc, vector<int>& low, vector<bool>& onStack, stack<int>& st, vector<vector<int>>& sccs, int& timer){
    disc[node] = low[node] = timer++;
    st.push(node);
    onStack[node] = true;

    for (int nbr : graph[node]){
        if (disc[nbr] == -1){
            tarjan(nbr, graph, disc, low, onStack, st, sccs, timer);
            low[node] = min(low[node], low[nbr]);
        }
        else if (onStack[nbr]) low[node] = min(low[node], disc[nbr]);
    }

    if (low[node] == disc[node]){
        vector<int> scc;
        while (true){
            int top = st.top();
            st.pop();
            onStack[top] = false;
            scc.push_back(top);
            if (top == node) break;
        }
        sccs.push_back(scc);
    }
}
int main(){
    int n = 5;
    vector<vector<int>> graph(n);
    graph[0].push_back(2);
    graph[2].push_back(0);
    graph[0].push_back(3);
    graph[3].push_back(4);
    graph[4].push_back(3);
    vector<int> disc(n, -1), low(n, -1);
    vector<bool> onStack(n, false);
    stack<int> st;
    vector<vector<int>> sccs;
    int timer = 0;
    for (int i=0; i<n; i++){
        if (disc[i] == -1) tarjan(i, graph, disc, low, onStack, st, sccs, timer);
    }
    return 0;
}