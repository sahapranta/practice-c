#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    queue<int> que;

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