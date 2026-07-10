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
    vector<int> findOrder(int numCourses, vector<vector<int>> prerequisites){
        vector<int> order;
        vector<int> indegree(numCourses, 0);
        for (const auto& pre : prerequisites){
            int course = pre[0];
            int prerequisite = pre[1];
            l[prerequisite].push_back(course);
            indegree[course]++;
        }
        queue<int> q;
        for (int i=0; i<numCourses; i++){
            if (indegree[i]==0) q.push(i);
        }
        while (!q.empty()){
            int course = q.front();
            q.pop();
            order.push_back(course);
            for (int nbr : l[course]){
                indegree[nbr]--;
                if (indegree[nbr]==0) q.push(nbr);
            }
        }
        if (order.size() != numCourses) return {};
        return order;
    }
};
int main(){
    
    return 0;
}