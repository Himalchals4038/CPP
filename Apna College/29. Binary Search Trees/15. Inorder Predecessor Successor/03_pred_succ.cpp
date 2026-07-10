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
    Node* curr = root;
    Node* pred = NULL;
    Node* succ = NULL;
    while(curr){
        if (curr->data == key){
            if (curr->left){
                Node* temp = curr->left;
                while(temp->right) temp = temp->right;
                pred = temp;
            }
            if (curr->right){
                Node* temp = curr->right;
                while(temp->left) temp = temp->left;
                succ = temp;
            }
            break;
        }
        else if (curr->data>key){
            succ = curr;
            curr = curr->left;
        }
        else{
            pred = curr;
            curr = curr->right;
        }
    }
    if (pred){
        if (succ) return {pred->data, succ->data};
        else return {pred->data, -1};
    }
    else{
        if (succ) return {-1, succ->data};
        else return {-1, -1};
    }
}
int main(){
    vector<int> vec = {3,2,1,5,6,4};
    Node* root = buildBST(vec);
    return 0;
}