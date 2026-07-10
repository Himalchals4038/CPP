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
void preOrder(Node* root){
    if (root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
// Helper creates new nodes and returns subtree sum in a single O(N) pass
int buildSumTree(Node* root, Node*& newNode){
    if (root==NULL){
        newNode = NULL;
        return 0;
    }
    newNode = new Node(0);
    int ls = buildSumTree(root->left, newNode->left);
    int rs = buildSumTree(root->right, newNode->right);
    
    newNode->data = root->data+ls+rs;
    return newNode->data;
}
Node* sumTree(Node* root){
    Node* newRoot = NULL;
    buildSumTree(root, newRoot);
    return newRoot;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    preOrder(root);
    cout<<endl;
    Node* newRoot = sumTree(root);
    preOrder(newRoot);
    return 0;
}