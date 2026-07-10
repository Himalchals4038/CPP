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
class Solution{
    Node* prev = NULL;
    Node* first = NULL;
    Node* second = NULL;
public:
    void inOrder(Node* root){
        if (root==NULL) return;
        inOrder(root->left);
        if (prev!=NULL && prev->data > root->data){
            if (first==NULL) first = prev;
            second = root;
        }
        prev = root;
        inOrder(root->right);
    }
    void recoverTree(Node* root){
        inOrder(root);
        int temp = first->data;
        first->data = second->data;
        second->data = temp;
    }
};
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}