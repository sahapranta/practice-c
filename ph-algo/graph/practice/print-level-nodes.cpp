// Question: You will be given an undirected graph which will be connected as input. Then you will be given a level L. You need to print the node values at level L in descending order. The source will be 0 always.

#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> &v, int n, int l)
{
    queue<pair<int, int>> q;
    vector<int> vis(n, false);
    vector<int> res;

    q.push({0, 0});
    vis[0] = true;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int parent = p.first;
        int level = p.second;
        q.pop();

        if (level == l)
        {
            res.push_back(parent);
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

    reverse(res.begin(), res.end());

    for (auto v : res)
    {
        cout << v << " ";
    }

    cout << endl;
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

    int l;
    cin >> l;

    bfs(v, n, l);

    return 0;
}

// Input
// 3 2
// 0 1
// 0 2
// 1

// Output: 2 1

// Input
// 6 7
// 0 1
// 0 2
// 1 2
// 0 3
// 4 2
// 3 5
// 4 3
// 1

// Output: 3 2 1

// Input
// 6 7
// 0 1
// 0 2
// 1 2
// 0 3
// 4 2
// 3 5
// 4 3
// 2

// Output: 5 4

// g++ hello.cpp -std=c++17
// ./a.out < in.txt