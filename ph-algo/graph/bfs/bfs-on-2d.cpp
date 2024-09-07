#include <bits/stdc++.h>

using namespace std;
bool vis[20][20];
int dis[20][20];
char v[20][20];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void bfs(int s1, int s2)
{
    queue<pair<int, int>> q;
    q.push({s1, s2});
    vis[s1][s2] = true;
    dis[s1][s2] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int a = p.first, b = p.second;
        q.pop();
        cout << a << " " << b << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj) && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    int s1, s2;
    cin >> s1 >> s2;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    bfs(s1, s2);

    //  Shortest path
    cout << dis[2][3] << endl;

    return 0;
}

// 3 4
// . . . .
// . . . .
// . . . .
// 1 1