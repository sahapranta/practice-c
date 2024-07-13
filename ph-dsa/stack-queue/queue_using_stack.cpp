#include <bits/stdc++.h>

using namespace std;
class MyQueue
{
public:
    stack<int> st;
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop()
    {
        stack<int> nst;
        int last;

        while (!st.empty())
        {
            int k = st.top();
            st.pop();

            if (st.empty())
            {
                last = k;
                break;
            }
            nst.push(k);
        }

        while (!nst.empty())
        {
            st.push(nst.top());
            nst.pop();
        }

        return last;
    }

    int peek()
    {
        stack<int> nst;
        int last;

        while (!st.empty())
        {
            int k = st.top();
            st.pop();

            if (st.empty())
            {
                last = k;
            }

            nst.push(k);
        }

        while (!nst.empty())
        {
            st.push(nst.top());
            nst.pop();
        }

        return last;
    }

    bool empty() { return st.empty(); }
};

int main()
{
    MyQueue *obj = new MyQueue();
    obj->push(10);
    int param_2 = obj->pop();
    int param_3 = obj->peek();
    bool param_4 = obj->empty();

    return 0;
}