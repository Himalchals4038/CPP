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
bool validate(Node* root, Node* min, Node* &max){
    if (root==NULL) return true;
    if (min!=NULL && root->data<=min->data) return false;
    if (max!=NULL && root->data>=max->data) return false;
    return (validate(root->left, min, root) && validate(root->right, root, max));
}
bool isValidBST(Node* root){
    Node* min = NULL;
    Node* max = NULL;
    return validate(root, min, max);
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}