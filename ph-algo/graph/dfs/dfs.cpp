#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> v, vector<bool> &vis, int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(v, vis, child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n);
    vector<bool> vis(n, false);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(v, vis, 0);

    return 0;
}

// Input
// 6 6
// 0 1
// 0 2
// 0 3
// 1 4
// 3 5
// 3 2

// Output
// 0
// 1
// 4
// 2
// 3
// 5

