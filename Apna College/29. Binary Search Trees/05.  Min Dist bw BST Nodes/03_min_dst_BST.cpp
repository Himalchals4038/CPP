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
class Solution{
    Node* prev = NULL;
public:
    int minDiffInBST(Node* root){
        int ans = INT_MAX;
        if (root==NULL) return ans;
        if (root->left){
            int leftMin = minDiffInBST(root->left);
            ans = min(ans, leftMin);
        }
        if (prev!=NULL) ans = min(ans, root->data - prev->data);
        prev = root;
        if (root->right){
            int rightMin = minDiffInBST(root->right);
            ans = min(ans, rightMin);
        }
        return ans;
    }
};
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}