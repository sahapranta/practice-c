#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> mat[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j : mat[i])
        {
            cout << j << " ";
        }

        cout << endl;
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