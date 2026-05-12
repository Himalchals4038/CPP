#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node* next;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
        next = NULL;
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
Node* connect(Node* root){
    if (root==NULL || root->left==NULL) return root;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    Node* prev = NULL;
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if (curr==NULL){
            if (!q.empty()) q.push(NULL);
            prev = NULL;
            continue;
        }
        else{
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
            if (prev!=NULL) prev->next = curr;
        }
        prev=curr;
    }
    return root;
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}