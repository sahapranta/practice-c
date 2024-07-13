#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head)
{
    Node *tmp = head;
    int i = 0;

    while (tmp != NULL)
    {
        i++;
        tmp = tmp->next;
    }

    return i;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

bool insert_position(Node *&head, Node *&tail, int pos, int val)
{
    if (pos > size(head))
    {
        cout << "Invalid" << endl;
        return false;
    }

    Node *newNode = new Node(val);

    if (pos == 0)
    {
        insert_head(head, tail, val);
        return true;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    if (tmp->next == NULL)
    {
        newNode->prev = tmp;
        tmp->next = newNode;
        tail = newNode;
        return true;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;

    return true;
}

void print(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
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
        int v, x;
        cin >> x >> v;
        bool inserted = insert_position(head, tail, x, v);

        if (inserted)
        {
            print(head);
            print_reverse(tail);
        }
    }

    return 0;
}