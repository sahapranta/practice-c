// https://leetcode.com/problems/island-perimeter/description/
#include <bits/stdc++.h>

using namespace std;
int m, n, ans;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool visited[105][105] = {false};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void dfs(int si, int sj, vector<vector<int>> &grid)
{
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj))
        {
            if (grid[ci][cj] == 0)
                ans++;
        }
        else
        {
            ans++;
        }

        if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == 1)
        {
            dfs(ci, cj, grid);
        }
    }
}

void bfs(int si, int sj, vector<vector<int>> &grid)
{
    visited[si][sj] = true;
    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int a = p.first, b = p.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj))
            {
                if (grid[ci][cj] == 0)
                    ans++;
            }
            else
            {
                ans++;
            }
            if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == 1)
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}

int islandPerimeter(vector<vector<int>> &grid)
{
    m = grid.size();
    n = grid[0].size();

    ans = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visited[i][j] && grid[i][j] == 1)
            {
                bfs(i, j, grid);
            }
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};
    cout << islandPerimeter(grid) << endl; // Output: 16
    return 0;
}