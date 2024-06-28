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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head = newNode;

    if (tail == NULL)
    {
        tail = newNode;
    }
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void delete_pos(Node *&head, Node *&tail, int pos)
{
    // jodi head na thake
    if (head == NULL || pos < 0)
    {
        return;
    }

    // Jokhon head delete korbo    
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }

        delete deleteNode;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;

    for (int i = 0; i < pos; i++)
    {
        if (curr == NULL)
        {
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL)
    {
        return;
    }

    Node *deleteNode = curr;

    if (prev != NULL)
    {
        prev->next = curr->next;
    }
    else
    {
        head = curr->next;
    }

    if (curr == tail)
    {
        tail = prev;
    }

    delete deleteNode;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;

    while (n--)
    {
        int a, val;
        cin >> a >> val;

        if (a == 0)
        {
            insert_head(head, tail, val);
            print(head);
        }
        else if (a == 1)
        {
            insert_tail(head, tail, val);
            print(head);
        }
        else if (a == 2)
        {
            delete_pos(head, tail, val);
            print(head);
        }
    }

    return 0;
}