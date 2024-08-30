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

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "The tree is empty" << endl;
        return;
    }

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}

Node *convert(int a[], int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;

    Node *root = new Node(a[mid]);
    Node *left = convert(a, l, mid - 1);
    Node *right = convert(a, mid + 1, r);

    root->left = left;
    root->right = right;

    return root;
}

int main()
{
    int n = 6;
    int a[] = {2, 5, 8, 12, 15, 18};

    Node *root = convert(a, 0, n - 1);

    level_order(root);

    return 0;
}