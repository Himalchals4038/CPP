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
Node* helperTree(vector<int> &preorder, vector<int> &inorder, int &preIdx, int left, int right){
    if (left>right) return NULL;
    Node* newNode = new Node(preorder[preIdx++]);
    if (left==right) return newNode;
    int idx = 0;
    for (int i=left; i<right; i++){
        if (inorder[i]==newNode->data) idx = i;
        newNode->left = helperTree(preorder, inorder, preIdx, left, idx-1);
        newNode->right = helperTree(preorder, inorder, preIdx, idx+1, right);
    }
    return newNode;
}
Node* buildTreeT(vector<int> &preorder, vector<int> &inorder){
    int preIdx = 0;
    return helperTree(preorder, inorder, preIdx, 0, inorder.size()-1);
}
int main(){
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};
    Node* root = buildTreeT(preorder, inorder);
    return 0;
}