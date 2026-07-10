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
Node* mergeBST(Node* root1, Node* root2){
    if (root1==NULL) return root2;
    if (root2==NULL) return root1;

    function<Node*(Node*, Node*)> insert = [&](Node* root, Node* node) -> Node* {
        if (root == NULL) return node;
        if (node->data < root->data) root->left = insert(root->left, node);
        else root->right = insert(root->right, node);
        return root;
    };

    Node* left = root2->left;
    Node* right = root2->right;
    root2->left = NULL;
    root2->right = NULL;

    root1 = insert(root1, root2);
    root1 = mergeBST(root1, left);
    return mergeBST(root1, right);
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}