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
private:
    bool dfsCheckCycle(int u, const vector<list<int>>& adj, vector<bool>& visited, vector<bool>& recursionStack){
        visited[u] = true;
        recursionStack[u] = true;
        for (int v : adj[u]){
            if (!visited[v]){
                if (dfsCheckCycle(v, adj, visited, recursionStack)) return true;
            }
            else if (recursionStack[v]){
                return true;
            }
        }
        recursionStack[u] = false;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites){
        vector<list<int>> adj(numCourses);
        for (const auto& pre : prerequisites){
            int course = pre[0];
            int prerequisite = pre[1];
            adj[prerequisite].push_back(course);
        }
        vector<bool> visited(numCourses, false);
        vector<bool> recursionStack(numCourses, false);
        for (int i=0; i<numCourses; ++i){
            if (!visited[i]) if (dfsCheckCycle(i, adj, visited, recursionStack)) return false;
        }
        return true;
    }
};
int main(){
    Graph g1(2);
    vector<vector<int>> pre1 = {{1, 0}};
    cout<<"Can finish courses: "<<(g1.canFinish(2, pre1) ? "Yes" : "No")<<endl; 

    Graph g2(2);
    vector<vector<int>> pre2 = {{1, 0}, {0, 1}};
    cout<<"Can finish courses: "<<(g2.canFinish(2, pre2) ? "Yes" : "No")<<endl;

    Graph g3(3);
    vector<vector<int>> pre3 = {{1, 0}, {2, 1}};
    cout<<"Can finish courses: "<<(g3.canFinish(3, pre3) ? "Yes" : "No")<<endl; 

    Graph g4(4);
    vector<vector<int>> pre4 = {{1, 0}, {2, 1}, {3, 2}, {1, 3}};
    cout<<"Can finish courses: "<<(g4.canFinish(4, pre4) ? "Yes" : "No")<<endl;

    Graph g5(4);
    vector<vector<int>> pre5 = {{1, 0}, {3, 2}};
    cout<<"Can finish courses: "<<(g5.canFinish(4, pre5) ? "Yes" : "No")<<endl; 

    Graph g6(3);
    vector<vector<int>> pre6 = {};
    cout<<"Can finish courses: "<<(g6.canFinish(3, pre6) ? "Yes" : "No")<<endl; 
    return 0;
}