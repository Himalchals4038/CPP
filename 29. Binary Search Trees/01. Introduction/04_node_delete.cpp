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
void deleteNode(Node*& root, int key){
    if (root==NULL) return;
    if (key<root->data) deleteNode(root->left, key);
    else if (key>root->data) deleteNode(root->right, key);
    else{
        if (root->left==NULL){
            Node* temp = root->right;
            delete root;
            root  = temp;
        }
        else if (root->right==NULL){
            Node* temp = root->left;
            delete root;
            root = temp;
        }
        else{
            Node* temp = root->right;
            while(temp->left!=NULL) temp = temp->left;
            root->data = temp->data;
            deleteNode(root->right, temp->data);
        }
    }
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    vector<int> ans1 = inOrder(root);
    deleteNode(root, 5);
    vector<int> ans2 = inOrder(root);
    copy(ans1.begin(), ans1.end(), ostream_iterator<int>(cout, " "));cout<<endl;
    copy(ans2.begin(), ans2.end(), ostream_iterator<int>(cout, " "));cout<<endl;
    return 0;
}