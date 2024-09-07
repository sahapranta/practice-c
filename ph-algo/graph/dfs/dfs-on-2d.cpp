#include <bits/stdc++.h>

using namespace std;

char a[20][20];
bool vis[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void dfs(int s1, int s2)
{
    cout << s1 << " " << s2 << endl;
    vis[s1][s2] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = s1 + d[i].first;
        int cj = s2 + d[i].second;
        if (valid(ci, cj) && vis[ci][cj] == false)
        {
            dfs(ci, cj);
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
            cin >> a[i][j];
        }
    }

    int s1, s2;
    cin >> s1 >> s2;

    memset(vis, false, sizeof(vis));

    dfs(s1, s2);

    return 0;
}

// 3 4
// . . . .
// . . . .
// . . . .
// 1 1
