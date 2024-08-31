#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        long long int num;
        cin >> num;
        pq.push(num);
    }

    int n;
    cin >> n;

    while (n--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            long long int x;
            cin >> x;
            pq.push(x);
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
            }
        }

        if (pq.empty())
        {
            cout << "Empty" << endl;
        }
        else
        {
            cout << pq.top() << endl;
        }
    }

    return 0;
}