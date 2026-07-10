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
    bool dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& recursionStack, vector<int>& order){
        visited[node] = true;
        recursionStack[node] = true;
        for (int nbr : adj[node]){
            if (!visited[nbr]){
                if (dfs(nbr, adj, visited, recursionStack, order)) return true;
            }
            else if (recursionStack[nbr]) return true;
        }
        recursionStack[node] = false;
        order.push_back(node);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>> prerequisites){
        vector<int> order;
        vector<vector<int>> adj(numCourses);
        vector<bool> visited(numCourses, false);
        vector<bool> recursionStack(numCourses, false);
        for (const auto& pre : prerequisites){
            int course = pre[0];
            int prerequisite = pre[1];
            adj[prerequisite].push_back(course);
        }
        for (int i=0; i<numCourses; i++){
            if (!visited[i]) if (dfs(i, adj, visited, recursionStack, order)) return {};
        }
        reverse(order.begin(), order.end());
        return order;
    }
};
int main(){
    
    return 0;
}