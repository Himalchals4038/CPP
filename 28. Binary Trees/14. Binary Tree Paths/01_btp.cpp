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
vector<string> binaryTreePaths(Node* root){
    vector<string> ans;
    if (root==NULL) return ans;
    if (root->left==NULL && root->right==NULL){
        ans.push_back(to_string(root->data));
        return ans;
    }
    vector<string> left = binaryTreePaths(root->left);
    vector<string> right = binaryTreePaths(root->right);
    for (string path : left) ans.push_back(to_string(root->data)+"->"+path);
    for (string path : right) ans.push_back(to_string(root->data)+"->"+path);
    return ans;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    vector<string> ans = binaryTreePaths(root);
    copy(ans.begin(), ans.end(), ostream_iterator<string>(cout, " "));
    return 0;
}