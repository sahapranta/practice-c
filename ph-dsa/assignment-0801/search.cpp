#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int val;
    Node *next;

    Node(long long int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, long long int val)
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

void search(Node *head, long long int val)
{
    Node *tmp = head;
    int index = 0;
    bool found = false;

    while (tmp != NULL)
    {
        if (tmp->val == val)
        {
            found = true;
            break;
        }

        tmp = tmp->next;
        index++;
    }

    cout << (found ? index : -1) << endl;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            long long int val;
            cin >> val;

            if (val == -1)
            {
                break;
            }

            insert_tail(head, tail, val);
        }

        long long int f;
        cin >> f;

        search(head, f);
    }

    return 0;
}