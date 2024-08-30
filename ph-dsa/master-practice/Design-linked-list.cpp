#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        this->val = v;
        this->next = NULL;
    }
};
class MyLinkedList
{
public:
    Node *head;
    MyLinkedList()
    {
        head = nullptr;
    }

    int get(int index)
    {
        Node *temp = head;
        while (temp != nullptr && index > 0)
        {
            temp = temp->next;
            index--;
        }
        if (temp == nullptr)
            return -1;
        return temp->val;
    }

    void addAtHead(int val)
    {
        if (head == nullptr)
        {
            Node *temp = new Node(val);
            head = temp;
        }
        else
        {
            Node *temp = new Node(val);
            temp->next = head;
            head = temp;
        }
        // return temp;
    }

    void addAtTail(int val)
    {
        Node *n = new Node(val);
        if (head == nullptr)
        {
            head = n;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = n;
        }
    }

    void addAtIndex(int index, int val)
    {
        Node *n = new Node(val);
        Node *temp = head;
        if (index == 0)
        {
            n->next = head;
            head = n;
        }
        else
        {
            while (temp != nullptr && index > 1)
            {
                temp = temp->next;
                index--;
            }
            if (temp == nullptr)
                return;
            if (temp != nullptr && temp->next == nullptr)
            {
                temp->next = n;
            }
            else
            {
                n->next = temp->next;
                temp->next = n;
            }
        }
    }

    void deleteAtIndex(int index)
    {
        Node *temp = head;
        if (index == 0)
        {
            head = head->next;
        }
        while (temp != nullptr && index > 1)
        {
            temp = temp->next;
            index--;
        }
        if (temp == nullptr)
            return;
        if (temp != nullptr && temp->next != nullptr)
        {
            temp->next = temp->next->next;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main()
{

    return 0;
}