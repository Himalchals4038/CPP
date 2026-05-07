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
int widthOfBinaryTree(Node* root){
    if (!root) return 0;
    queue<pair<Node*, unsigned long long>> q;
    q.push({root, 0});
    unsigned long long maxWidth = 0;
    while (!q.empty()){
        unsigned long long currSize = q.size();
        unsigned long long stIdx = q.front().second;
        unsigned long long endIdx = q.back().second;
        maxWidth = max(maxWidth, endIdx-stIdx+1);
        for (unsigned long long i=0; i<currSize; i++){
            auto p = q.front();
            q.pop();
            unsigned long long idx = p.second - stIdx;
            if (p.first->left) q.push({p.first->left, 2*idx+1});
            if (p.first->right) q.push({p.first->right, 2*idx+2});
        }
    }
    return maxWidth;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    cout << "Maximum width of the binary tree is: " << widthOfBinaryTree(root) << endl;
    return 0;
}