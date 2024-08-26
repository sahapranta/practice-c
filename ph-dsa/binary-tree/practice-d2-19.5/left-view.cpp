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

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> v;

    if (root == nullptr)
    {
        return v;
    }

    bool frq[3005] = {false};
    queue<pair<TreeNode<int> *, int>> q;

    q.push({root, 1});

    while (!q.empty())
    {
        pair<TreeNode<int> *, int> p = q.front();
        TreeNode<int> *node = p.first;
        int level = p.second;
        q.pop();

        if (frq[level] == false)
        {
            v.push_back(node->data);
            frq[level] = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    return v;
}