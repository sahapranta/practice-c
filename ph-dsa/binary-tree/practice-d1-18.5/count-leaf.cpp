// https://www.naukri.com/code360/problems/count-leaf-nodes_893055?leftPanelTabValue=SUBMISSION
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

int count_leaf(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    return count_leaf(root);
}