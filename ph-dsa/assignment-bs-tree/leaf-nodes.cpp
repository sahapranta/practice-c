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
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left, *right;

        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }

        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void print_leaf(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    if (root->right == NULL && root->left == NULL)
    {
        v.push_back(root->val);
        return;
    }

    print_leaf(root->right, v);
    print_leaf(root->left, v);
}

int main()
{
    Node *root = input_tree();
    vector<int> v;

    print_leaf(root, v);

    sort(v.begin(), v.end(), greater<int>());

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}