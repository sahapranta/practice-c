// https://leetcode.com/problems/univalued-binary-tree/
#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        bool ok = true;

        queue<TreeNode *> q;

        if (root != NULL)
        {
            q.push(root);
        }

        while (!q.empty())
        {
            TreeNode *p = q.front();
            q.pop();

            if (p->val != root->val)
            {
                ok = false;
            }

            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }

        return ok;
    }
};