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
bool validate(Node* root, Node*& prev){
    if (root==NULL) return true;
    if (!validate(root->left, prev)) return false;
    if (prev!=NULL && root->data<=prev->data) return false;
    prev = root;
    return validate(root->right, prev);
}
bool isValidBST(Node* root){
    Node* prev = NULL;
    return validate(root, prev);
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}