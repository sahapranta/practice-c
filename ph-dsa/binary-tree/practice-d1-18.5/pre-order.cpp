// https://www.naukri.com/code360/problems/preorder-binary-tree_5948?leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>

using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left),
                                                       right(right) {}
};

vector<int> v;

void post_order(TreeNode *root)
{
    if (root == NULL)
        return;

    v.push_back(root->data);

    post_order(root->left);
    post_order(root->right);
}

vector<int> postorderTraversal(TreeNode *root)
{
    v.clear();

    post_order(root);

    return v;
}