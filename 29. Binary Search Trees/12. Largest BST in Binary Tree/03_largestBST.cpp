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
    int min, max, size;
    Info (int min, int max, int size){
        this->min = min;
        this->max = max;
        this->size = size;
    }
};
Info helper(Node* root){
    if (root==NULL) return Info(INT_MAX, INT_MIN, 0);
    Info left = helper(root->left);
    Info right = helper(root->right);
    if (left.max<root->data && right.min>root->data){
        int currMin = min(root->data, left.min);
        int currMax = max(root->data, right.max);
        int currSize = left.size + right.size + 1;
        return Info(currMin, currMax, currSize);
    } 
    return Info(INT_MIN, INT_MAX, max(left.size, right.size));
}
int largestBST(Node* root){
    Info info = helper(root);
    return info.size;
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}