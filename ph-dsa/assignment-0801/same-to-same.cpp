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

void print(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;
    bool same = true;

    while (tmp != NULL || tmp2 != NULL)
    {
        if (tmp == NULL || tmp2 == NULL)
        {
            same = false;
            break;
        }

        if (tmp->val != tmp2->val)
        {
            same = false;
            break;
        }

        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    cout << (same ? "YES" : "NO") << endl;
}

void get_input(Node *&head, Node *&tail)
{
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
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    get_input(head, tail);
    get_input(head2, tail2);

    print(head, head2);

    return 0;
}