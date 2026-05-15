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
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites){
        vector<int> indegree(numCourses, 0);
        for (int i=0; i<prerequisites.size(); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            l[u].push_back(v);
            indegree[v]++;
            queue<int> q;
            for (int i=0; i<numCourses; i++){
                if (indegree[i] == 0) q.push(i);
            }
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                for (int nbr : l[curr]){
                    indegree[nbr]--;
                    if (indegree[nbr] == 0) q.push(nbr);
                }
            }
        }
        for (int i=0; i<numCourses; i++){
            if (indegree[i] != 0){
                return false;
            }
        }
        return true;
    }
};
int main(){
    
    return 0;
}