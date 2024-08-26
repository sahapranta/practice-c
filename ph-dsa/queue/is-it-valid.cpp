#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        stack<char> st;
        string str;
        cin >> str;

        for (char s : str)
        {
            if (!st.empty() && abs(s - st.top()) == 1)
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