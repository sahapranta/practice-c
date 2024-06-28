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

bool insert_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return true;
    }

    if (pos < 0)
    {
        cout << "Invalid" << endl;
        return false;
    }

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return true;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (tmp->next == NULL)
        {
            cout << "Invalid" << endl;
            return false;
        }

        tmp = tmp->next;
    }

    Node *next = tmp->next;
    tmp->next = newNode;
    newNode->next = next;

    return true;
}

int counter(Node *head)
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

void duplicate(Node *head)
{
    Node *tmp = head;
    bool found = false;

    while (tmp->next != NULL)
    {
        Node *sec = tmp->next;
        int val = tmp->val;

        while (sec != NULL)
        {
            if (val == sec->val)
            {
                found = true;
                break;
            }

            sec = sec->next;
        }

        if (found)
        {
            break;
        }

        tmp = tmp->next;
    }

    cout << (found ? "YES" : "NO") << endl;
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

void print_mid(Node *head)
{
    int size = counter(head);
    int isEven = size % 2 == 0;
    int mid = isEven ? (size / 2) - 1 : (size / 2);

    Node *tmp = head;

    for (int i = 0; i < mid; i++)
    {
        tmp = tmp->next;
    }

    cout << tmp->val;

    if (isEven)
    {
        cout << " " << tmp->next->val;
    }

    cout << endl;
}

bool is_ascending(Node *head)
{
    Node *tmp = head;

    while (tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
        {
            return false;
        }

        tmp = tmp->next;
    }

    return true;
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

    int n;
    cin >> n;

    while (n--)
    {
        int p, v;
        cin >> p >> v;

        if (insert_position(head, p, v))
        {
            print(head);
        }
    }

    // cout << (is_ascending(head) ? "YES" : "NO") << endl;
    // print_mid(head);
    // cout << counter(head) << endl;
    // print(head);
    return 0;
}

// g++ -std=c++17 check.cpp