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
Node* lowestCommonAncestor(Node* root, Node* p, Node* q){
    if (root==NULL) return NULL;
    if (root->data==p->data || root->data==q->data) return root;
    Node* left = lowestCommonAncestor(root->left, p, q);
    Node* right = lowestCommonAncestor(root->right, p, q);
    if (left!=NULL && right!=NULL) return root;
    return (left!=NULL) ? left : right;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    Node* lca = lowestCommonAncestor(root, root->right->left, root->right->right);
    if (lca != NULL) cout<<lca->data<<endl;
    return 0;
}