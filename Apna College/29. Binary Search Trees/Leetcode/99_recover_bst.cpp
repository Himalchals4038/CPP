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
void inorder(Node* root, vector<int> &vec){
    if (root==NULL) return;
    inorder(root->left, vec);
    vec.push_back(root->data);
    inorder(root->right, vec);
}
void replaceInorder(Node* root, vector<int> &vec, int &idx){
    if (root==NULL) return;
    replaceInorder(root->left, vec, idx);
    root->data = vec[idx++];
    replaceInorder(root->right, vec, idx);
}
void recoverTree(Node* root){
    vector<int> vec;
    inorder(root, vec);
    sort(vec.begin(), vec.end());
    int idx = 0;
    replaceInorder(root, vec, idx);
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}