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

void descending(Node *&head)
{
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        Node *tmp2 = tmp->next;

        while (tmp2 != NULL)
        {
            if (tmp->val < tmp2->val)
            {
                swap(tmp->val, tmp2->val);
            }

            tmp2 = tmp2->next;
        }

        tmp = tmp->next;
    }
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
    descending(head);
    print(head);
    return 0;
}