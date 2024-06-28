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

void diff(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    int min = INT_MAX;

    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }

        if (tmp->val < min)
        {
            min = tmp->val;
        }

        tmp = tmp->next;
    }

    cout << max - min << endl;
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

    diff(head);
    return 0;
}