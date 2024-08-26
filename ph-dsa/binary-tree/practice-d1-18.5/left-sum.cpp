// https://www.naukri.com/code360/problems/left-sum_920380?leftPanelTabValue=SUBMISSION
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

long long sum;

void dfs(BinaryTreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }

    if (root->left != nullptr)
    {
        sum += root->left->data;
        dfs(root->left);
    }

    if (root->right != nullptr)
    {
        dfs(root->right);
    }
}

long long leftSum(BinaryTreeNode<int> *root)
{
    sum = 0;

    dfs(root);

    return sum;
}