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
bool identicalTrees(Node* root1, Node* root2){
    if (root1==NULL && root2==NULL) return true;
    if (root1==NULL || root2==NULL) return false;
    return root1->data == root2->data && identicalTrees(root1->left, root2->left) && identicalTrees(root1->right, root2->right);
}
int main(){

    return 0;
}