// https://leetcode.com/problems/binary-tree-tilt
#include <cmath>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
private:
    int s = 0;

    int sum(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int l = sum(root->left);
        int r = sum(root->right);

        int tilt = abs(l - r);
        s += tilt;

        return l + r + root->val;
    }

public:
    int findTilt(TreeNode *root)
    {
        s = 0;
        sum(root);
        return s;
    }
};