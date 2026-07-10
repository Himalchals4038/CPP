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
Node* buildBST(vector<int> vec, int start, int end){
    if (start>end) return NULL;
    int mid = end + (start-end)/2;
    Node* root = new Node(vec[mid]);
    root->left = buildBST(vec, start, mid-1);
    root->right = buildBST(vec, mid+1, end);
    return root;
}
Node* merge2BST(Node* root1, Node* root2){
    vector<int> vec1 = inOrder(root1);
    vector<int> vec2 = inOrder(root2);
    vector<int> merged;
    int i=0, j=0;
    while(i<vec1.size() &&j<vec2.size()){
        if (vec1[i]<vec2[j]) merged.push_back(vec1[i++]);
        else merged.push_back(vec2[j++]);
    }
    while(i<vec1.size()) merged.push_back(vec1[i++]);
    while(j<vec2.size()) merged.push_back(vec2[j++]);
    buildBST(merged, 0, merged.size()-1);
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}