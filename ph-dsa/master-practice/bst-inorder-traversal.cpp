#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
    void inOrder(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
            return;

        inOrder(root->left, v);
        v.push_back(root->val);
        inOrder(root->right, v);
    }

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;

        inOrder(root, v);

        return v;
    }
};

int main()
{

    return 0;
}