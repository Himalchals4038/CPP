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
    bool dfs(int node, vector<int>& state, vector<int>& order){
        state[node] = 1;
        for (int nbr : l[node]){
            if (state[nbr]==1) return true;
            if (state[nbr]==0) if (dfs(nbr, state, order)) return true;
        }
        state[node] = 2;
        order.push_back(node);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>> prerequisites){
        vector<int> order;
        vector<int> state(numCourses, 0);
        for (const auto& pre : prerequisites){
            int course = pre[0];
            int prerequisite = pre[1];
            l[prerequisite].push_back(course);
        }
        for (int i=0; i<numCourses; i++){
            if (state[i]==0) if (dfs(i, state, order)) return {};
        }
        reverse(order.begin(), order.end());
        return order;
    }
};
int main(){
    
    return 0;
}