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
void preOrder(Node* root){
    if (root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if (root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node* root){
    if (root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(Node* root){
    if (root==NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* node = q.front();
        q.pop();
        if (node==NULL){
            if (!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else break; 
        }
        cout<<node->data<<" ";
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}
int height(Node* root){
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* node = buildTree(preorder);
    cout<<"Height: "<<height(node)<<endl;
    return 0;
}