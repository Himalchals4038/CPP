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
Node* largestBST(Node* root){
    if (root==NULL) return NULL;
    Node* left = largestBST(root->left);
    Node* right = largestBST(root->right);
    if (left==NULL && right==NULL) return root;
    if (left==NULL) return right;
    if (right==NULL) return left;
    vector<int> leftInOrder = inOrder(left);
    vector<int> rightInOrder = inOrder(right);
    if (leftInOrder.back()<root->data && rightInOrder.front()>root->data) return root;
    if (leftInOrder.back()<root->data) return right;
    return left;
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}