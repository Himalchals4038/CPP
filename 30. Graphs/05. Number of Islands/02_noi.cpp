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
        l[v].push_back(u);
    }
    void printAdjList(){
        for (int i=0; i<V; i++){
            cout<<i<<" -> ";
            for (int nbr : l[i]) cout<<nbr<<" ";
            cout<<endl;
        }
    }
    void BreadthFirstSearch(int src){
        queue<int> q;
        bool* visited = new bool[V]{0};
        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            cout<<curr<<" ";
            for (int nbr : l[curr]){
                if (!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout<<endl;
        delete [] visited;
    }
    void DepthFirstSearch(int src){
        stack<int> st;
        bool* visited = new bool[V]{0};
        st.push(src);
        visited[src] = true;
        while(!st.empty()){
            int curr = st.top();
            st.pop();
            cout<<curr<<" ";
            for (int nbr : l[curr]){
                if (!visited[nbr]){
                    st.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout<<endl;
        delete [] visited;
    }
    int numIslands(vector<vector<char>> &grid){
        if (grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        // Direction arrays for 4-directional adjacency (Up, Down, Left, Right)
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j]=='1'){
                    count++;
                    queue<pair<int, int>> q;
                    q.push({i ,j});
                    grid[i][j] = '0';
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for (int d=0; d<4; d++){
                            int nx = x + dx[d];
                            int ny = y + dy[d];
                            if (nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]=='1'){
                                q.push({nx, ny});
                                grid[nx][ny] = '0';
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(3,2);
    g.addEdge(2,4);
    cout<<"Breadth First Search: "; g.BreadthFirstSearch(0);
    cout<<"Depth First Search: "; g.DepthFirstSearch(0);
    return 0;
}