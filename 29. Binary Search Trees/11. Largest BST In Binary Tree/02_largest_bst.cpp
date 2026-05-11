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

class Info {
public:
    int minVal;
    int maxVal;
    bool isBST;
    int sum;
};
Info helper(Node* root, int &maxSum){
    if (root == NULL) return {INT_MAX, INT_MIN, true, 0};
    Info left = helper(root->left, maxSum);
    Info right = helper(root->right, maxSum);
    if (left.isBST && right.isBST && root->data > left.maxVal && root->data < right.minVal) {
        int currSum = root->data + left.sum + right.sum;
        maxSum = max(maxSum, currSum);
        return {min(root->data, left.minVal), max(root->data, right.maxVal), true, currSum};
    }
    return {0, 0, false, 0};
}

int maxSumBST(Node* root) {
    int maxSum = 0;
    helper(root, maxSum);
    return maxSum;
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}