// 108. Convert Sorted Array to Binary Search Tree
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode *convert(vector<int> &a, int l, int r)
    {
        if (l > r)
            return NULL;

        int mid = (l + r) / 2;

        TreeNode *root = new TreeNode(a[mid]);
        root->left = convert(a, l, mid - 1);
        root->right = convert(a, mid + 1, r);

        return root;
    }

public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int end = nums.size() - 1;
        return convert(nums, 0, end);
    }
};