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

void print_left_boundary(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        cout << root->val << " ";
        print_left_boundary(root->left);
    }
    else if (root->right)
    {
        cout << root->val << " ";
        print_left_boundary(root->right);
    }
    // Do not print leaf nodes here
}

void print_leaves(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }

    print_leaves(root->left);
    print_leaves(root->right);
}

void print_right_boundary(Node *root)
{
    if (root == NULL)
        return;

    if (root->right)
    {
        print_right_boundary(root->right);
        cout << root->val << " ";
    }
    else if (root->left)
    {
        print_right_boundary(root->left);
        cout << root->val << " ";
    }
    // Do not print leaf nodes here
}

void print_outer_tree(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";

    print_left_boundary(root->left);

    print_leaves(root->left);
    print_leaves(root->right);

    print_right_boundary(root->right);
}

int main()
{
    Node *root = input_tree();
    print_outer_tree(root);
    return 0;
}