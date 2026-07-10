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
int heightAndDiameter(Node* root, int& diameter){
    if (root == NULL) return 0;
    int leftHeight = heightAndDiameter(root->left, diameter);
    int rightHeight = heightAndDiameter(root->right, diameter);
    diameter = max(diameter, leftHeight + rightHeight);
    return max(leftHeight, rightHeight) + 1;
}
int diameterOfBinaryTree(Node* root){
    int diameter = 0;
    heightAndDiameter(root, diameter);
    return diameter;
}
int main(){

    return 0;
}