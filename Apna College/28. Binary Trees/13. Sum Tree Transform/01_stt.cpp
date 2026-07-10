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
int sumNode(Node* root){
    if (root==NULL) return 0;
    int ls = sumNode(root->left);
    int rs = sumNode(root->right);
    return root->data+ls+rs;
}
Node* sumTree(Node* root){
    if (root==NULL) return NULL;
    Node* newNode = new Node(sumNode(root));
    newNode->left = sumTree(root->left);
    newNode->right = sumTree(root->right);
    return newNode;
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