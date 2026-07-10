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

    function<void(Node*, vector<int>&)> getInOrder = [&](Node* root, vector<int>& ans) {
        if (root == NULL) return;
        getInOrder(root->left, ans);
        ans.push_back(root->data);
        getInOrder(root->right, ans);
    };

    vector<int> inOrder1, inOrder2;
    getInOrder(root1, inOrder1);
    getInOrder(root2, inOrder2);
    vector<int> merged;
    merge(inOrder1.begin(), inOrder1.end(), inOrder2.begin(), inOrder2.end(), back_inserter(merged));

    function<Node*(int, int)> buildBST = [&](int start, int end) -> Node*{
        if (start>end) return NULL;
        int mid = start+(end-start)/2;
        Node* root = new Node(merged[mid]);
        root->left = buildBST(start,mid-1);
        root->right = buildBST(mid+1,end);
        return root;
    };
    
    return buildBST(0, merged.size() - 1);
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}