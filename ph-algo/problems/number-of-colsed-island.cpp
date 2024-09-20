// https://leetcode.com/problems/number-of-closed-islands/

#include <bits/stdc++.h>

using namespace std;

int n, m;
bool vis[105][105];
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
bool flag;

bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    return false;
}

void dfs(int si, int sj, vector<vector<int>> &grid)
{
    vis[si][sj] = true;

    if (si == 0 || sj == 0 || si == n - 1 || sj == m - 1)
    {
        flag = false;
    }

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
        {
            dfs(ci, cj, grid);
        }
    }
}

int closedIsland(vector<vector<int>> &grid)
{
    memset(vis, false, sizeof(vis));
    n = grid.size();
    m = grid[0].size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == 0)
            {
                flag = true;
                dfs(i, j, grid);
                if (flag)
                    count++;
            }
        }
    }

    return count;
}

int main()
{

    return 0;
}