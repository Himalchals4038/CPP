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
vector<int> getPredSucc(Node* root, int key){
    int pred = -1, succ = -1;
    while(root){
        if (root->data == key){
            if (root->left){
                Node* temp = root->left;
                while(temp->right) temp = temp->right;
                pred = temp->data;
            }
            if (root->right){
                Node* temp = root->right;
                while(temp->left) temp = temp->left;
                succ = temp->data;
            }
            break;
        }
        else if (root->data>key){
            succ = root->data;
            root = root->left;
        }
        else{
            pred = root->data;
            root = root->right;
        }
    }
    return {pred, succ};
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}