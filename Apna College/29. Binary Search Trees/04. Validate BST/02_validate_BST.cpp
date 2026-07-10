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
Node* insert (Node* root, int val){
    if (root==NULL) return new Node(val);
    if (val<root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}
Node* buildBST(vector<int> &vec){
    Node* root = NULL;
    for(int val : vec) root = insert(root, val);
    return root;
}
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