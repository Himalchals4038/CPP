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
vector<int> postOrder(Node* root){
    vector<int> ans;
    if (root==NULL) return ans;
    vector<int> left = postOrder(root->left);
    vector<int> right = postOrder(root->right);
    ans.insert(ans.end(), left.begin(), left.end());
    ans.insert(ans.end(), right.begin(), right.end());
    ans.push_back(root->data);
    return ans;
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    vector<int> ans = postOrder(root);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    return 0;
}