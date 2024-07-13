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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        sz++;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;

        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz <= 0;
    }
};

int main()
{
    myQueue q;

    q.push(10);
    q.push(12);
    q.push(13);
    q.pop();
    q.pop();
    q.push(10);
    q.pop();

    cout << q.size() << endl;
    cout << q.front() << endl;

    return 0;
}