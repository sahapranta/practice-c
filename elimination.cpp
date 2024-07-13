#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        stack<char> st;

        for (char s : str)
        {
            if (!st.empty() && s == '1' && st.top() == '0')
            {
                st.pop();
            }
            else
            {
                st.push(s);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}