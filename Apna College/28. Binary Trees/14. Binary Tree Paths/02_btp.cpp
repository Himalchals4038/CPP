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
void getPaths(Node* root, string& currentPath, vector<string>& ans) {
    int originalLen = currentPath.length();
    currentPath += to_string(root->data);
    if (root->left == NULL && root->right == NULL) ans.push_back(currentPath);
    else{
        currentPath += "->";
        if (root->left) getPaths(root->left, currentPath, ans);
        if (root->right) getPaths(root->right, currentPath, ans);
    }
    currentPath.erase(originalLen);
}
vector<string> binaryTreePaths(Node* root){
    vector<string> ans;
    string currentPath = "";
    if (root != NULL) getPaths(root, currentPath, ans);
    return ans;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    vector<string> ans = binaryTreePaths(root);
    copy(ans.begin(), ans.end(), ostream_iterator<string>(cout, " "));
    return 0;
}