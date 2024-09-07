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

    int comp = 0;

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            dfs(v, vis, i);
            comp++;
        }
    }

    cout << "Component: " << comp << endl;

    return 0;
}

// 6 5
// 0 1
// 1 2
// 0 2
// 3 4
// 3 5