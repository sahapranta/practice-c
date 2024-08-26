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

// g++ file.cpp && ./file.out < input.cpp > output.cpp

int main()
{
    Node *root = input_tree();

    return 0;
}
