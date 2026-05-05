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
int height(Node* root){
    if (root==NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1+max(rh, lh);
}
int diam(Node* root){
    int lDia = diam(root->left);
    int rDia = diam(root->right);
    int currDia = height(root->left)+height(root->right);
    return max(lDia, rDia, currDia);
}
int main(){

    return 0;
}