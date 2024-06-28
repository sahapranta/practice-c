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

void remove_duplicate(Node *head)
{
    Node *tmp = head;

    while (tmp)
    {
        Node *curr = tmp;
        Node *tmp2 = tmp->next;

        while (tmp2)
        {
            if (tmp2->val == tmp->val)
            {
                curr->next = tmp2->next;
                delete tmp2;
                tmp2 = curr->next;
            }
            else
            {
                curr = tmp2;
                tmp2 = tmp2->next;
            }
        }
        tmp = tmp->next;
    }
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

    remove_duplicate(head);
    print(head);
    return 0;
}