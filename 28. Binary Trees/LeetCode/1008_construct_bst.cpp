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
// Helper function to build the tree recursively
Node* buildTreeHelper(const vector<int> &preorder, int &idx){
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1) return NULL;
    Node* root = new Node(preorder[idx]);
    root->left = buildTreeHelper(preorder, idx); //Left Child
    root->right = buildTreeHelper(preorder, idx); //Right Child
    return root;
}
Node* buildTree(const vector<int> &preorder){
    int idx = -1;
    return buildTreeHelper(preorder, idx);
};
//Pre-Order
void preOrder(Node* root){
    if (root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
// Helper function to build BST from preorder traversal
Node* bstHelper(vector<int>& preorder, int& idx, int upperBound) {
    if (idx >= preorder.size() || preorder[idx] > upperBound) return NULL;
    Node* root = new Node(preorder[idx++]);
    root->left = bstHelper(preorder, idx, root->data);
    root->right = bstHelper(preorder, idx, upperBound);
    return root;
}
Node* bstFromPreorder(vector<int>& preorder) {
    int idx = 0;
    return bstHelper(preorder, idx, INT_MAX);
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    preOrder(root);
    cout<<endl;
    return 0;
}