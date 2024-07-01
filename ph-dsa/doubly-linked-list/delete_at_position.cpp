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
    Node *prev = tail;
    tail = newNode;
    tail->prev = prev;
}

void insert_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);

    if (pos == 0)
    {
        insert_head(head, tail, val);
        return;
    }

    if (pos > size(head))
    {
        cout << "Invalid position" << endl;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (tmp->next == NULL)
        {
            break;
        }

        tmp = tmp->next;
    }

    if (tmp->next == NULL)
    {
        newNode->prev = tmp;
        tmp->next = newNode;
        tail = newNode;
        return;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

void delete_position(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        cout << "The List is empty";
        return;
    }

    Node *tmp = head;
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        return;
    }

    if (pos > size(head))
    {
        cout << "Invalid position" << endl;
        return;
    }

    for (int i = 0; i < pos; i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp;

    if (tmp->next == NULL)
    {
        tmp->prev->next = NULL;
        tail = tmp->prev;
        delete deleteNode;
        return;
    }

    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;

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

void print_reverse(Node *tail)
{
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

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }

    delete_position(head, tail, 0);
    delete_position(head, tail, 4);
    delete_position(head, tail, 1);
    insert_position(head, tail, 3, 6);
    insert_position(head, tail, 6, 10);
    delete_position(head, tail, 10);
    print(head);
    print_reverse(tail);
    return 0;
}