#include <bits/stdc++.h>

using namespace std;

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.size() == 0;
    }
};

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.size() == 0;
    }
};

int main()
{
    myQueue que;
    myStack st;

    int n, m;

    cin >> n >> m;

    while (n--)
    {
        int v;
        cin >> v;
        st.push(v);
    }

    while (m--)
    {
        int v;
        cin >> v;
        que.push(v);
    }

    bool ok = true;

    if (st.size() != que.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty() && !que.empty())
    {
        if (que.front() != st.top())
        {
            ok = false;
            break;
        }
        que.pop();
        st.pop();
    }

    cout << (ok ? "YES" : "NO") << endl;

    return 0;
}