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
int widthOfBinaryTree(Node* root){
    if (!root) return 0;
    unsigned long long maxWidth = 0;
    queue<pair<Node*, unsigned long long>> q;
    q.push({root, 0});
    while (!q.empty()){
        int levelSize = q.size();
        unsigned long long levelStartIdx = q.front().second;
        unsigned long long rightmost_idx = q.back().second;
        maxWidth = max(maxWidth, rightmost_idx-levelStartIdx+1);
        for (int i=0; i<levelSize; ++i) {
            pair<Node*, unsigned long long> p = q.front();
            q.pop();
            Node* node = p.first;
            unsigned long long idx = p.second;
            if (node->left) q.push({node->left, 2*(idx-levelStartIdx)+1});
            if (node->right) q.push({node->right, 2*(idx-levelStartIdx)+2});
        }
    }
    return maxWidth;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    cout << "Maximum width of the binary tree is: " << widthOfBinaryTree(root) << endl;
    return 0;
}