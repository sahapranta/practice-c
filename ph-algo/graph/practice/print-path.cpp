// Question: You will be given an undirected graph as input. Then you will be given a query Q. For each query, you will be given source S and destination D. You need to print the shortest distance between S and D. If there is no path from S to D, print -1.

#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> &v, int n, int src, int dst)
{
    queue<pair<int, int>> q;
    vector<int> vis(n, false);

    q.push({src, 0});
    vis[src] = true;

    bool visited = false;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int parent = p.first;
        int level = p.second;
        q.pop();

        if (parent == dst)
        {
            cout << level << endl;
            visited = true;
        }

        for (int a : v[parent])
        {
            if (!vis[a])
            {
                q.push({a, level + 1});
                vis[a] = true;
            }
        }
    }

    if (!visited)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int src, dst;
        cin >> src >> dst;
        bfs(v, n, src, dst);
    }

    return 0;
}
// #Sample Input 1
// 6 7
// 0 1
// 0 2
// 1 2
// 0 3
// 4 2
// 3 5
// 4 3
// 6
// 0 5
// 1 5
// 2 5
// 2 3
// 1 4
// 0 0

// Output 1
// 2
// 3
// 3
// 2
// 2
// 0

// Sample Input 2
// 7 5
// 0 1
// 0 2
// 4 5
// 4 6
// 5 7
// 3
// 0 4
// 5 1
// 1 3

// Sample Output 2
// -1
// -1
// -1
