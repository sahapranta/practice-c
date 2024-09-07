#include <bits/stdc++.h>

using namespace std;

vector<int> v[1000];
bool vis[1000];
int parent[1000];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        // cout << p << endl;
        for (int child : v[p])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = p;
            }
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
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src, dst;
    cin >> src >> dst;

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    bfs(src);

    int x = dst;
    vector<int> path;

    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }

    reverse(path.begin(), path.end());

    for (int a : path)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}

// 6 7
// 0 1
// 1 2
// 1 3
// 2 4
// 2 5
// 4 5
// 4 3
// 0
// 5