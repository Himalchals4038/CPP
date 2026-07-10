#include <bits/stdc++.h>
using namespace std;
class DisjointSetUnion{
public:
    int n;
    vector<int> par,rank;
    DisjointSetUnion(int n){
        this->n = n;
        for (int i=0; i<n; i++){
            par.push_back(i);
            rank.push_back(0);
        }
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
    int find(int u){
        if (par[u] == u) return u;
        return find(par[u]);
    }
    bool isConnected(int u, int v){
        return find(u) == find(v);
    }
    void getInfo(){
        for (int i=0; i<n; i++){
            cout<<"Node: "<<i<<" Parent: "<<par[i]<<" Rank: "<<rank[i]<<endl;
        }
    }
};
int main(){
    DisjointSetUnion dsu(6);

    dsu.unionByRank(0, 2);
    cout<<dsu.find(2)<<endl;

    dsu.unionByRank(1, 3);
    dsu.unionByRank(2, 5);
    dsu.unionByRank(0, 3);
    cout<<dsu.find(2)<<endl;

    dsu.unionByRank(0, 4);
    dsu.getInfo();
    return 0;
}