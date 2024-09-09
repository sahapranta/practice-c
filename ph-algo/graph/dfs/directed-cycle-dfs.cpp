#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
bool vis[N];
bool path[N];
bool ans;

vector<int> adj[N];

void dfs(int p)
{
    vis[p] = true;
    path[p] = true;

    for (int child : adj[p])
    {
        if (path[child])
        {
            ans = true;
        }

        if (!vis[child])
        {
            dfs(child);
        }
    }

    path[p] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(path));

    ans = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    cout << "Cycle " << (ans ? "Found" : "Not Found") << endl;

    return 0;
}

// Input
// 7 8
// 4 3
// 2 1
// 1 0
// 0 3
// 3 1
// 2 4
// 4 5
// 5 6
// 2 6

// Output: Cycle Found