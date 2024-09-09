#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
bool vis[N];
int parent[N];
vector<int> adj[N];
int cycleCount;

void dfs(int p)
{
    vis[p] = true;

    for (int child : adj[p])
    {
        if (vis[child] && parent[p] != child)
        {
            cycleCount++;
        }
        else if (!vis[child])
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
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycleCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    cout << "Number of cycles: " << cycleCount << endl;

    return 0;
}

// Input
// 10 30
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 0 6
// 0 7
// 0 8
// 0 9
// 1 2
// 1 3
// 1 4
// 1 5
// 1 6
// 1 7
// 1 8
// 1 9
// 2 3
// 2 4
// 2 5
// 2 6
// 2 7
// 2 8
// 2 9
// 3 4
// 3 5
// 3 6
// 3 7
// 3 8
// 3 9
// 4 5
// 4 6
// 4 7
// 4 8
// 4 9
// 5 6
// 5 7
// 5 8
// 5 9
// 6 7
// 6 8
// 6 9
// 7 8
// 7 9
// 8 9

// Output: Number of cycles: 21