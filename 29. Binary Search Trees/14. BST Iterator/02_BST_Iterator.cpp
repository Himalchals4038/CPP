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
class BSTIterator{
public:
    Node* curr;
    BSTIterator(Node* root){
        curr = root;
    }
    int next(){
        int val = -1;
        while (curr != NULL) {
            if (curr->left == NULL){
                val = curr->data;
                curr = curr->right;
                break;
            }
            else{
                Node* pred = curr->left;
                while (pred->right != NULL && pred->right != curr) pred = pred->right;
                if (pred->right == NULL) {
                    pred->right = curr;
                    curr = curr->left;
                }
                else{
                    pred->right = NULL;
                    val = curr->data;
                    curr = curr->right;
                    break;
                }
            }
        }
        return val;
    }
    bool hasNext(){
        return curr != NULL;
    }
};
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}