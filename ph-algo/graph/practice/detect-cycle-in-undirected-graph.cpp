#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
bool vis[N];
bool ans;
int parent[N];
vector<int> adj[N];

void dfs(int p)
{
    vis[p] = true;
    for (int child : adj[p])
    {
        if (vis[child] == true && parent[p] != child)
        {
            ans = true;
            return;
        }

        if (!vis[child])
        {
            parent[child] = p;
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
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
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