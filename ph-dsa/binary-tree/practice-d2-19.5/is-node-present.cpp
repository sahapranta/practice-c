template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool present(BinaryTreeNode<int> *root, int x)
{
    if (root == nullptr)
        return false;

    if (root->data == x)
    {
        return true;
    }

    bool l = present(root->left, x);
    bool r = present(root->right, x);

    return l || r;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    return present(root, x);
}