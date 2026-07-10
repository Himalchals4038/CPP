#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    ~Graph(){
        delete [] l;
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
    }
    void printAdjList(){
        for (int i=0; i<V; i++){
            cout<<i<<" -> ";
            for (int nbr : l[i]) cout<<nbr<<" ";
            cout<<endl;
        }
    }
    bool dfs(int node, const vector<vector<int>>& adj, vector<int>& state, vector<int>& order){
        state[node] = 1;
        for (int nbr : adj[node]){
            if (state[nbr] == 0){
                if (dfs(nbr, adj, state, order)) return true;
            }
            else if (state[nbr] == 1) return true;
        }
        state[node] = 2;
        order.push_back(node);
        return false;
    }
    vector<int> findOrder(int numCourses, const vector<vector<int>>& prerequisites){
        vector<int> order;
        order.reserve(numCourses);
        vector<vector<int>> adj(numCourses);
        vector<int> state(numCourses, 0);
        for (const auto& pre : prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }
        for (int i=0; i<numCourses; i++){
            if (state[i] == 0) if (dfs(i, adj, state, order)) return {};
        }
        reverse(order.begin(), order.end());
        return order;
    }
};
int main(){
    Graph g(0);

    int numCourses1 = 2;
    vector<vector<int>> pre1 = {{1, 0}};
    vector<int> res1 = g.findOrder(numCourses1, pre1);
    cout << "Order 1: ";
    for(int n : res1) cout << n << " ";
    cout << endl;

    int numCourses2 = 4;
    vector<vector<int>> pre2 = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};
    vector<int> res2 = g.findOrder(numCourses2, pre2);
    cout << "Order 2: ";
    for(int n : res2) cout << n << " ";
    cout << endl;

    int numCourses3 = 2;
    vector<vector<int>> pre3 = {{1, 0}, {0, 1}};
    vector<int> res3 = g.findOrder(numCourses3, pre3);
    cout << "Order 3: ";
    if (res3.empty()) cout << "Cycle detected, no valid order.";
    else for(int n : res3) cout << n << " ";
    cout << endl;

    return 0;
}