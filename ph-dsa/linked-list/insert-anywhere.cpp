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

void insertAtPosition(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        if (tmp->next == NULL)
        {
            break;
        }

        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insertAtHead(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "**** Deleted head *****" << endl;
}

void deleteFromPosition(Node *&head, int pos)
{
    if (pos < 1)
    {
        cout << "Invalid position";
        return;
    }

    if (pos == 1)
    {
        deleteHead(head);
        return;
    }

    Node *tmp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        if (tmp->next == NULL)
        {
            break;
        }

        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;

    cout << "**** Deleted from position " << pos << " ****" << endl;
}

int main()
{
    Node *node = NULL;

    while (true)
    {
        cout << "-------------------------------" << endl;
        cout << "1: Insert at head" << endl;
        cout << "2: Insert at tail" << endl;
        cout << "3: Insert at position" << endl;
        cout << "4: Delete at position" << endl;
        cout << "5: Print list" << endl;
        cout << "6: Terminate" << endl;
        cout << "-------------------------------" << endl;
        cout << "Option: ";

        int op;
        cin >> op;
        if (op == 1 || op == 2)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;

            if (op == 1)
            {
                insertAtHead(node, v);
            }
            else
            {
                insertAtTail(node, v);
            }
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "\nEnter Value: ";
            cin >> v;
            if (pos == 0)
            {
                insertAtHead(node, v);
            }
            else
            {
                insertAtPosition(node, pos, v);
            }
        }
        else if (op == 4)
        {
            // deleting the node at position
            int pos;
            cout << "Enter Position: ";
            cin >> pos;
            deleteFromPosition(node, pos);
        }
        else if (op == 5)
        {
            cout << "Here is the list: " << endl;
            print(node);
            cout << "\n";
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}