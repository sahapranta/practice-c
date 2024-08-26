// https://www.naukri.com/code360/problems/level-order-traversal_796002?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> v;

void post_order(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;

    queue<BinaryTreeNode<int> *> q;

    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        v.push_back(f->val);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    v.clear();

    post_order(root);

    return v;
}