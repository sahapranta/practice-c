#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> p;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }

    for (auto it : p)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

// 6 6
// 0 1
// 1 5
// 0 4
// 0 3
// 3 4
// 2 4