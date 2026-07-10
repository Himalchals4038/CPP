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
int maxLevelSum(Node* root){
    if (root==NULL) return 0;
    queue<Node*> q;
    q.push(root);
    int maxSum = INT_MIN;
    int ans = 0;
    int currLevel = 0;
    while(!q.empty()){
        int n = q.size();
        int sum = 0;
        currLevel++;
        for (int i=0; i<n; i++){
            Node* node = q.front();
            q.pop();
            sum+=node->data;
            if (node->left!=NULL) q.push(node->left);
            if (node->right!=NULL) q.push(node->right);
        }
        if (sum>maxSum){
            maxSum = sum;
            ans = currLevel;
        }
    }
    return ans;
}
long long kSum(Node* root, int k){
    if (root==NULL) return -1;
    vector<long long> vec;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        long long sum = 0;
        for (int i=0; i<n; i++){
            Node* node = q.front();
            q.pop();
            sum+=node->data;
            if (node->left!=NULL) q.push(node->left);
            if (node->right!=NULL) q.push(node->right);
        }
        vec.push_back(sum);
    }
    if (k>vec.size()) return -1;
    sort(vec.begin(), vec.end(), greater<long long>());
    return vec[k-1];
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