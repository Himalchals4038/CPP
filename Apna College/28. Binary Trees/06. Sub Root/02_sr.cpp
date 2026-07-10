#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;
Node *buildTree(const vector<int> &preorder)
{
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1)
        return NULL;
    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
};
bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    return root1->data == root2->data && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}
bool isSubTree(Node *root1, Node *root2)
{
    if (root2 == NULL)
        return true;
    if (root1 == NULL)
        return false;
    if (isIdentical(root1, root2))
        return true;
    return isSubTree(root1->left, root2) || isSubTree(root1->right, root2);
}
int main()
{
    vector<int> vec1 = {3, 4, 1, -1, -1, 2, 0, -1, -1, -1, 5, -1, -1};
    vector<int> vec2 = {4, 1, -1, -1, 2, -1, -1};
    Node *root1 = buildTree(vec1);
    idx = -1; // Reset index before building the second tree
    Node *root2 = buildTree(vec2);
    cout << (isSubTree(root1, root2) ? "True" : "False") << endl;
    return 0;
}