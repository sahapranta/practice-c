// https://www.naukri.com/code360/problems/special-binary-tree_920502
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->left == NULL || root->right == NULL)
        return false;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);

    return l && r;
}