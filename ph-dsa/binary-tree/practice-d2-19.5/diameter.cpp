// https://www.naukri.com/code360/problems/diameter-of-the-binary-tree_920552
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
int mx = 0;

int maxHeight(TreeNode<int> *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l + r;

    mx = max(d, mx);

    return max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    mx = 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l + r;
    return max(d, mx);
}
