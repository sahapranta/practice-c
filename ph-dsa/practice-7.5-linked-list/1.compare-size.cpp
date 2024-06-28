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

int get_size(Node *head)
{
    Node *tmp = head;
    int count = 0;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

int main()
{
    int size[2];
    int n = 2;
    while (n--)
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

        size[n] = get_size(head);
    }

    if (size[0] == size[1])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;

    return 0;
}