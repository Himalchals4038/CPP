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
static int ans = 0;
int height(Node* root){
    if (root==NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    ans = max(ans, lh+rh);
    return 1+max(rh, lh);
}
int diam(Node* root){
    height(root);
    return ans;
}
int main(){

    return 0;
}