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
vector<int> topView(Node* root){
    vector<int> ans;
    if (root==NULL) return ans;
    map<int, int> topNode;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while (!q.empty()){
        auto p = q.front();
        q.pop();
        Node* curr = p.first;
        int hd = p.second;
        if (topNode.find(hd) == topNode.end()) topNode[hd] = curr->data;
        if (curr->left!=NULL) q.push({curr->left, hd-1});
        if (curr->right!=NULL) q.push({curr->right, hd+1});
    }
    for (auto it : topNode) ans.push_back(it.second);
    return ans;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, 7, -1, -1, 6, -1, 8, -1, -1};
    Node* root = buildTree(preorder);
    vector<int> ans = topView(root);
    copy(ans.begin(), ans.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}