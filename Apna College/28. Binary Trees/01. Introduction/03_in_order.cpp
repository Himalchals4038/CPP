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
    root->left = buildTree(preorder); //Left Child
    root->right = buildTree(preorder); //Right Child
    return root;
};
//Pre-Order
//Root Left Right
void preOrder(Node* root){
    if (root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
//In-Order
//Left Root Right
void inOrder(Node* root){
    if (root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    return 0;
}