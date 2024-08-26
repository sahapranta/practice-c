#include <iostream>

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
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }

        if (p == nullptr || q == nullptr)
        {
            return false;
        }

        bool v = p->val == q->val;
        bool l = isSameTree(p->left, q->left);
        bool r = isSameTree(p->right, q->right);

        return v && l && r;
    }
};

// Helper function to create a tree from an array
TreeNode *createTree(int arr[], int n, int i = 0)
{
    if (i >= n || arr[i] == -1)
        return nullptr; // -1 represents null
    TreeNode *root = new TreeNode(arr[i]);
    root->left = createTree(arr, n, 2 * i + 1);
    root->right = createTree(arr, n, 2 * i + 2);
    return root;
}

int main()
{
    // Test case 1
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    TreeNode *p1 = createTree(arr1, 3);
    TreeNode *q1 = createTree(arr2, 3);

    Solution sol;
    std::cout << "Test case 1: " << (sol.isSameTree(p1, q1) ? "true" : "false") << std::endl;

    // Test case 2
    int arr3[] = {1, 2, -1};
    int arr4[] = {1, -1, 2};
    TreeNode *p2 = createTree(arr3, 3);
    TreeNode *q2 = createTree(arr4, 3);

    std::cout << "Test case 2: " << (sol.isSameTree(p2, q2) ? "true" : "false") << std::endl;

    return 0;
}