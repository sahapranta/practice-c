#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }

    Node *root = new Node(val);

    root->left = input_tree();
    root->right = input_tree();

    return root;
}

void print_tree(Node *root)
{
    if (!root) return;

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    int current_level = 0;

    while (!q.empty())
    {
        auto [node, level] = q.front();
        q.pop();

        if (level > current_level)
        {
            current_level = level;
            cout << endl;
        }

        cout << node->val << " ";

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    cout << endl;
}

int main()
{
    Node *root = input_tree();

    print_tree(root);

    return 0;
}
