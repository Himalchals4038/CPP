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
static int prevOrder = 0;
int kthSmallest(Node* root, int k){
    if (root==NULL) return -1;
    if (root->left){
        int leftAns = kthSmallest(root->left,k);
        if (leftAns != -1) return leftAns;
    }
    if (prevOrder+1==k) return root->data;
    prevOrder++;
    if (root->right){
        int rightAns = kthSmallest(root->right,k);
        if (rightAns != -1) return rightAns;
    }
    return -1;
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}