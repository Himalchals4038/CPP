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
void flatten (Node* root){
    if (root==NULL) return;
    flatten(root->left);
    flatten(root->right);
    if (root->left==NULL) return;
    Node* temp = root->right;
    root->right = root->left;
    root->left = NULL;
    Node* t = root->right;
    while (t->right!=NULL) t = t->right;
    t->right = temp;
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}