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
static Node* nextRight = NULL;
void flatten (Node* root){
    if (root==NULL) return;
    flatten(root->right);
    flatten(root->left);
    root->left = NULL;
    root->right = nextRight;
    nextRight = root;
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};
    Node* root = buildTree(preorder);
    flatten(root);
    while (root){
        cout<<root->data<<" ";
        root = root->right;
    }
    return 0;
}