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
    static void dfsIslands(vector<vector<char>> &grid, int i, int j, int n, int m){
        stack<pair<int, int>> st;
        st.push({i, j});
        grid[i][j] = '0'; // Mark as visited
        
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        while (!st.empty()) {
            pair<int, int> curr = st.top();
            st.pop();

            for (int k = 0; k < 4; ++k) {
                int ni = curr.first + dx[k];
                int nj = curr.second + dy[k];

                if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '1') {
                    grid[ni][nj] = '0';
                    st.push({ni, nj});
                }
            }
        }
    }
    static int numIslands(vector<vector<char>> &grid){
        if (grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (grid[i][j]=='1'){
                    count++;
                    Graph::dfsIslands(grid, i, j, n, m);
                }
            }
        }
        return count;
    }
};
int main(){
    vector<vector<char>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };
    cout << "Number of islands: " << Graph::numIslands(grid) << endl; // Should be 3
    return 0;
}