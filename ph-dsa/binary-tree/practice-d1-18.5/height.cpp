
// https://www.naukri.com/code360/problems/tree-height_4609628?leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
using namespace std;
template <typename T>

class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int max_height(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int heightOfBinaryTree(TreeNode<int> *root)
{
    return max_height(root);
}
