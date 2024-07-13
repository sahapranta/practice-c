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

    bool plaindrome = true;
    Node *f = head;
    Node *end = tail;

    while (f != end)
    {
        if (f->val != end->val)
        {
            plaindrome = false;
            break;
        }

        f = f->next;
        end = end->prev;
    }

    cout << (plaindrome ? "YES" : "NO") << endl;

    return 0;
}