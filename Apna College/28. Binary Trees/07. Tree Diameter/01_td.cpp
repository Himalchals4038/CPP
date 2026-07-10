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
int diameterOfBinaryTree(Node* root){
    if (root==NULL) return 0;
    int leftHeight = diameterOfBinaryTree(root->left);
    int rightHeight = diameterOfBinaryTree(root->right);
    int leftDiameter = diameterOfBinaryTree(root->left);
    int rightDiameter = diameterOfBinaryTree(root->right);
    return max(leftHeight+rightHeight,max(leftDiameter,rightDiameter));
}
int main(){

    return 0;
}