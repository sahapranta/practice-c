#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
bool vis[N];
bool ans;
vector<int> adj[N];

void dfs(int p)
{
    vis[p] = true;

    for (int child : adj[p])
    {
        if (vis[child] == true)
        {
            ans = true;
            return;
        }

        if (!vis[child])
        {
            dfs(child);
        }
    }
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

// 10 12
// 0 1
// 1 2
// 2 3
// 3 4
// 5 6
// 6 7
// 7 8
// 8 9
// 9 5
// 1 5
// 3 7

// Output: Cycle Found