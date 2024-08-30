#include <bits/stdc++.h>

using namespace std;

void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &stack, int element)
{
    if (stack.empty())
    {
        stack.push(element);
        return;
    }

    int top = stack.top();
    stack.pop();
    insertAtBottom(stack, element);
    stack.push(top);
}

void rev(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }

    int top = stack.top();
    stack.pop();
    rev(stack);
    insertAtBottom(stack, top);
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    print(st);
    rev(st);
    print(st);

    return 0;
}