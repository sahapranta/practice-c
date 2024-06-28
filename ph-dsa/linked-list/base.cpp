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

void print_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void min_max(Node *head)
{
    int min = INT_MIN;
    int max = INT_MAX;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > min)
        {
            min = tmp->val;
        }

        if (tmp->val < max)
        {
            max = tmp->val;
        }

        tmp = tmp->next;
    }

    cout << endl
         << min << " " << max;

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_tail(head, tail, val);
    }

    print_list(head);
    min_max(head);
    return 0;
}