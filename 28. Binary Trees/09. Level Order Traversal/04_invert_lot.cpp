#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;
Node* buildTree(const vector<int> &preorder){
    idx++;
    if (preorder[idx] == -1) return NULL;
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
};
vector<vector<int>> invertLevelOrder(Node* root){
    vector<vector<int>> ans;
    if (root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> level(n);
        for (int i=0; i<n; i++){
            Node* node = q.front();
            q.pop();
            level[i] = node->data;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        ans.push_back(level);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
vector<vector<int> > zigzagLevelOrder(Node* root){
    vector<vector<int>> ans;
    if (root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        int n = q.size();
        vector<int> level(n);
        for (int i=0; i<n; i++){
            Node* node = q.front();
            q.pop();
            int index = flag ? i : (n-1-i);
            level[index] = node->data;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        ans.push_back(level);
        flag = !flag;
    }
    return ans;
}
vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if (root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> level(n);
        for (int i=0; i<n; i++){
            Node* node = q.front();
            q.pop();
            level[i] = node->data;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};

    return 0;
}