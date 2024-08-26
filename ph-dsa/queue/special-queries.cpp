#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<string> que;

    int n;
    cin >> n;

    while (n--)
    {
        int k;
        cin >> k;

        if (k == 0)
        {
            string name;
            cin >> name;
            que.push(name);
        }
        else if (k == 1)
        {
            if (que.size() > 0)
            {
                string name = que.front();
                que.pop();
                cout << name << endl;
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}