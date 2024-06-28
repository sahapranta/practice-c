#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print(Node *node)
{
    Node *tmp = node;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void insertAtTail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

int main()
{
    Node *node = NULL;

    while (true)
    {
        cout << "********************************" << endl;
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print list" << endl;
        cout << "Option 3: Terminate" << endl;
        cout << "********************************" << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;

            insertAtTail(node, v);
        }
        else if (op == 2)
        {
            cout << "Here is the list: " << endl;
            print(node);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}