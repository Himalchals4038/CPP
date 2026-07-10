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
void insert(Node* &root, int val){
    if (root==NULL){
        root = new Node(val);
        return;
    }
    if (val<root->data) insert(root->left, val);
    else insert(root->right, val);
}
Node* buildBST(vector<int> &vec){
    Node* BST = NULL;
    for(int val : vec) insert(BST, val);
    return BST;
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};

    return 0;
}