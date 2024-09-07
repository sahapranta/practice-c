#include <bits/stdc++.h>

using namespace std;

vector<int> v[1000];
bool vis[1000];

void bfs(int src, int dst)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool found = false;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;

        if (parent == dst)
        {
            cout << level << endl;
            found = true;
        }

        for (auto child : v[parent])
        {
            if (!vis[child])
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }

    if (!found)
    {
        cout << "Level Not Found: " << dst << endl;
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

    int src;
    cin >> src;

    memset(vis, false, sizeof(vis));

    bfs(src, 16);

    return 0;
}