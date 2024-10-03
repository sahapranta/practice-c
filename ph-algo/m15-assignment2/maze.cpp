#include <bits/stdc++.h>

using namespace std;

char a[1001][1001];
bool vis[1001][1001];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

void bfs(int s1, int s2)
{
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    queue<pair<int, int>> q;

    q.push({s1, s2});
    vis[s1][s2] = true;

    pair<int, int> end = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int i = p.first;
        int j = p.second;

        if (a[i][j] == 'D')
        {
            end = {i, j};
        }

        for (pair<int, int> dk : d)
        {
            int ci = i + dk.first;
            int cj = j + dk.second;

            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {i, j};
            }
        }
    }

    if (end.first != -1)
    {
        pair<int, int> cur = end;
        while (cur != make_pair(s1, s2))
        {
            pair<int, int> p = parent[cur.first][cur.second];

            for (int k = 0; k < 4; k++)
            {
                int ci = p.first + d[k].first;
                int cj = p.second + d[k].second;

                if (ci == cur.first && cj == cur.second && a[ci][cj] != 'D')
                {
                    a[ci][cj] = 'X';
                    break;
                }
            }
            cur = p;
        }
    }

    print();
}

int main()
{
    cin >> n >> m;

    pair<int, int> start;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == 'R')
            {
                start = {i, j};
            }
        }
    }

    memset(vis, false, sizeof(vis));

    bfs(start.first, start.second);

    return 0;
}

// Input
// 5 6
// ...D.#
// .##..#
// ....#.
// .R#...
// .#.##.

// Output:
// ...D.#
// .##X.#
// .XXX#.
// .R#...
// .#.##.

// Input
// 5 6
// ...D.#
// .R...#
// ....#.
// ..#...
// .#.##.

// Output:
// ...D.#
// .RXX.#
// ....#.
// ..#...
// .#.##.