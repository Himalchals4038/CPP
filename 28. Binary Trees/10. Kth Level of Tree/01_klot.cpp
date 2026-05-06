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
vector<int> kLevel(Node* root, int k){
    vector<int> ans;
    if (root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if (curr==NULL){
            level++;
            if (!q.empty()) q.push(NULL);
        } 
        else{
            if (level==k) ans.push_back(curr->data);
            if (curr->left!=NULL) q.push(curr->left);
            if (curr->right!=NULL) q.push(curr->right);
        }
    }
    return ans;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    vector<int> ans = kLevel(root, 2);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}