#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
bool vis[N];
bool path[N];
int cnt;
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
            cnt++;
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
    cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    cout << "Cycle " << (ans ? "Found" : "Not Found") << endl;
    cout << cnt << endl;
    return 0;
}

// Input
// 6 10
// 4 0
// 4 2
// 4 1
// 2 0
// 2 3
// 5 0
// 5 4
// 1 5
// 1 3
// 3 4
