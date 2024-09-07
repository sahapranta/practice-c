#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n + 1);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a;
        cin >> a;
        vector<int> nodes = v[a];
        int size = nodes.size();

        if (size > 0)
        {
            sort(nodes.begin(), nodes.end(), greater<int>());
            for (int i = 0; i < size; i++)
            {
                cout << nodes[i] << " ";
            }
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}

// Input
// 6 8
// 0 4
// 0 5
// 4 2
// 4 3
// 5 3
// 2 0
// 0 1
// 1 3
// 6
// 0
// 1
// 2
// 3
// 4
// 5

// Output
// 5 4 2 1
// 3 0
// 4 0
// 5 4 1
// 3 2 0
// 3 0