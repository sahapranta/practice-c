#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, a, t;
    cin >> n >> t;

    // vector<int> v;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     v.push_back(a);
    // }

    // int s, e;

    // for (int i = 0; i < t; i++)
    // {
    //     cin >> s;
    //     cin >> e;
    //     int sum = 0;

    //     for (int i = s - 1; i < e; i++)
    //     {
    //         sum += v[i];
    //     }

    //     cout << sum << endl;
    // }

    // using prefix sum
    long long int v[n];
    cin >> a;
    v[0] = a;

    for (int i = 1; i < n; i++)
    {
        cin >> a;
        v[i] = a + v[i - 1];
    }

    while (t--)
    {
        long long int s, e;
        cin >> s >> e;

        if (s == 1)
        {
            cout << v[e - 1] << endl;
        }
        else
        {
            cout << v[e - 1] - v[s - 2] << endl;
        }
    }

    return 0;
}