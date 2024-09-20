// https://leetcode.com/problems/count-sub-islands
#include <bits/stdc++.h>

using namespace std;
int n, m;
bool vis[505][505];
vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    return false;
}
bool flag;

void dfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
{
    vis[si][sj] = true;

    if (grid1[si][sj] == 0)
    {
        flag = false;
    }

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
        {
            dfs(ci, cj, grid1, grid2);
        }
    }
}

void bfs(int si, int sj, vector<vector<int>> &grid1,
         vector<vector<int>> &grid2)
{
    queue<pair<int, int>> q;
    q.emplace(si, sj);
    vis[si][sj] = true;

    while (!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();

        if (grid1[i][j] == 0)
        {
            flag = false;
        }

        for (auto [di, dj] : d)
        {
            int ci = i + di, cj = j + dj;

            if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
            {
                q.emplace(ci, cj);
                vis[ci][cj] = true;
            }
        }
    }
}

int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
{
    memset(vis, false, sizeof(vis));
    n = grid1.size();
    m = grid2[0].size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid2[i][j] == 1)
            {
                flag = true;
                dfs(i, j, grid1, grid2);

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