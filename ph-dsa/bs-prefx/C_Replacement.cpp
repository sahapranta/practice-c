#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            int b = v[i] > 0 ? 1 : 2;
            replace(v.begin(), v.end(), v[i], b);
        }
    }

    for (int k : v)
    {
        cout << k << " ";
    }

    return 0;
}