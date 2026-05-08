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
void inorderOptimal(Node* root, Node*& first, Node*& middle, Node*& last, Node*& prev) {
    if (root==NULL) return;
    inorderOptimal(root->left, first, middle, last, prev);
    if (prev!=NULL && root->data < prev->data){
        if (first == NULL){
            first = prev;
            middle = root;
        }
        else last = root;
    }
    prev = root;
    inorderOptimal(root->right, first, middle, last, prev);
}
void recoverTree(Node* root){
    Node *first = NULL, *middle = NULL, *last = NULL, *prev = NULL;
    inorderOptimal(root, first, middle, last, prev);
    if (first && last) swap(first->data, last->data);
    else if (first && middle) swap(first->data, middle->data);
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}