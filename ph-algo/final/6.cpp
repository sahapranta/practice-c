#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5005;

vector<int> tree[MAXN];
multiset<int> values[MAXN];
int parent[MAXN];

void dfs(int node, int par)
{
    parent[node] = par;
    for (int child : tree[node])
    {
        if (child != par)
        {
            dfs(child, node);
        }
    }
}

vector<int> getPath(int u, int v)
{
    vector<int> path_u, path_v;
    while (u != 0)
    {
        path_u.push_back(u);
        u = parent[u];
    }
    while (v != 0)
    {
        path_v.push_back(v);
        v = parent[v];
    }
    reverse(path_u.begin(), path_u.end());
    reverse(path_v.begin(), path_v.end());

    int lca = 0;
    while (lca < path_u.size() && lca < path_v.size() && path_u[lca] == path_v[lca])
    {
        lca++;
    }
    lca--;

    vector<int> path;
    for (int i = path_u.size() - 1; i > lca; i--)
    {
        path.push_back(path_u[i]);
    }
    for (int i = lca; i < path_v.size(); i++)
    {
        path.push_back(path_v[i]);
    }
    return path;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0);

    int q;
    cin >> q;

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "insert")
        {
            int u, x;
            cin >> u >> x;
            values[u].insert(x);
        }
        else if (op == "delete")
        {
            int u, x;
            cin >> u >> x;
            auto it = values[u].find(x);
            if (it != values[u].end())
            {
                values[u].erase(it);
            }
        }
        else if (op == "find")
        {
            int u, v, k;
            cin >> u >> v >> k;

            vector<int> path = getPath(u, v);
            vector<int> allValues;

            for (int node : path)
            {
                allValues.insert(allValues.end(), values[node].begin(), values[node].end());
            }

            sort(allValues.begin(), allValues.end());

            if (k <= allValues.size())
            {
                cout << allValues[k - 1] << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}