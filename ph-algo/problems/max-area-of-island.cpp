// https://leetcode.com/problems/max-area-of-island/description/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int n, m;
    bool vis[55][55];
    int ans;
    vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    bool valid(int ci, int cj)
    {
        if (ci >= 0 && ci < n && cj >= 0 && cj < m)
            return true;
        return false;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        ans++;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(ci, cj, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        memset(vis, false, sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    ans = 0;
                    dfs(i, j, grid);
                    mx = max(ans, mx);
                }
            }
        }

        return mx;
    }
};

int main()
{

    return 0;
}