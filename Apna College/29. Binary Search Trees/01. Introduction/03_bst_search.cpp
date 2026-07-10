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
bool search(Node* root, int key){
    if (root==NULL) return false;
    if (root->data == key) return true;
    if (key<root->data) return search(root->left, key);
    return search(root->right, key);
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    cout<<(search(root, 5) ? "Found" : "Not Found")<<endl;
    cout<<(search(root, 20) ? "Found" : "Not Found")<<endl;
    return 0;
}