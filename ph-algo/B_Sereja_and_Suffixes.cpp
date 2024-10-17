#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int a[n + 1];
    int pos[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> v;

    for (int i = n; i >= 1; i--)
    {
        v.insert(a[i]);
        pos[i] = v.size();
    }

    int t;

    while (m--)
    {
        cin >> t;
        cout << pos[t] << '\n';
    }

    return 0;
}