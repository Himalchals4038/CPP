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
vector<int> inOrder(Node* root){
    vector<int> ans;
    if (root==NULL) return ans;
    vector<int> left = inOrder(root->left);
    vector<int> right = inOrder(root->right);
    ans.insert(ans.end(), left.begin(), left.end());
    ans.push_back(root->data);
    ans.insert(ans.end(), right.begin(), right.end());
    return ans;
}
class Info{
public:
    int minVal;
    int maxVal;
    bool isBST;
    int size;
    Node* largestRoot;
};
Info helper(Node* root){
    if (root == NULL) return {INT_MAX, INT_MIN, true, 0, NULL};
    Info left = helper(root->left);
    Info right = helper(root->right);
    if (left.isBST && right.isBST && root->data > left.maxVal && root->data < right.minVal){
        return {min(root->data, left.minVal), max(root->data, right.maxVal), true, left.size+right.size+1, root};
    }
    if (left.size > right.size) return {0, 0, false, left.size, left.largestRoot};
    return {0, 0, false, right.size, right.largestRoot};
}
Node* largestBST(Node* root){
    return helper(root).largestRoot;
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}