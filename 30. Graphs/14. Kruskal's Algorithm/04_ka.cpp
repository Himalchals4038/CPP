#include <bits/stdc++.h>
using namespace std;

class Edge{
public:
    int u, v, wt;
    Edge(int u, int v, int wt){
        this->u = u;
        this->v = v;
        this->wt = wt;
    }
    bool operator<(const Edge &other) const{
        return wt < other.wt;
    }
};

class Graph{
public:
    int v;
    vector<Edge> edges;
    vector<int> par, rank;
    Graph(int v){
        this->v = v;
        par.resize(v);
        rank.resize(v, 0);
        for (int i=0; i<v; i++) par[i] = i;
        edges.clear();
    }
    void addEdge(int u, int v, int wt){
        edges.push_back(Edge{u, v, wt});
    }
    int find(int u){
        if (par[u] == u) return u;
        return par[u] = find(par[u]);
    }
    void unionByRank(int u, int v){
        int parU = find(u);
        int parV = find(v);
        if (parU == parV) return;
        if (rank[parU] < rank[parV]) par[parU] = parV;
        else if (rank[parV] < rank[parU]) par[parV] = parU;
        else{
            par[parV] = parU;
            rank[parU]++;
        }
    }
    void kruskalMST(){
        sort(edges.begin(), edges.end());
        int mstCost = 0;
        int count = 0;
        vector<Edge> mstEdges;
        for (int i=0; i<edges.size() && count<v-1; i++){
            Edge e = edges[i];
            int parU = find(e.u);
            int parV = find(e.v);
            if (parU != parV){
                unionByRank(parU, parV);
                mstEdges.push_back(e);
                mstCost += e.wt;
                count++;
            }
        }
        cout<<"Edges in the MST:"<<endl;
        for (const Edge &e : mstEdges){
            cout<<"Edge: "<<e.u<<" - "<<e.v<<" Weight: "<<e.wt<<endl;
        }
        cout<<"Cost of MST: "<<mstCost<<endl;
    }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 6);
    g.addEdge(0, 3, 5);
    g.addEdge(1, 3, 15);
    g.addEdge(2, 3, 4);
    g.kruskalMST();
    return 0;
}