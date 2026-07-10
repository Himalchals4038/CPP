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
vector<int> inorderTraversal(Node* root){
    vector<int> ans;
    if (root==NULL) return ans;
    Node* curr = root;
    while(curr!=NULL){
        if (curr->left==NULL){
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else{
            //Find the inorder predecessor
            Node* ip = curr->left;
            while(ip->right!=NULL && ip->right!=curr) ip = ip->right;
            if (ip->right==NULL){
                ip->right = curr; //Create connection
                curr = curr->left;
            }
            else{
                ip->right = NULL; //Break connection
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,7,-1,-1,6,-1,8,-1,-1};

    return 0;
}