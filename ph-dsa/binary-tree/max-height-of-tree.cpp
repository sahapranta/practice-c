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

int max_height(Node *root)
{
    if (root == NULL)
        return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();

    cout << "Max height: " << max_height(root) << endl;
    return 0;
}

// input: 10 20 30 70 150 120 40 80 90 -1 -1 130 -1 60 50 -1 -1 100 -1 -1 140 -1 -1 -1 -1 -1 110 -1 -1 -1 -1 = 6
// intput: 10 20 50 30 40 70 60 -1 -1 -1 -1 -1 80 -1 -1 -1 -1 = 4