// https://leetcode.com/problems/number-of-islands/description/
#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
int n, m;

bool valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        return true;
    return false;
}

void dfs(int si, int sj, vector<vector<char>> &grid)
{
    grid[si][sj] = 'x';

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && grid[ci][cj] == '1')
        {
            dfs(ci, cj, grid);
        }
    }
}

void bfs(int si, int sj, vector<vector<char>> &grid)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    grid[si][sj] = 'x';

    while (!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();

        for (auto [di, dj] : d)
        {
            int ci = i + di, cj = j + dj;

            if (valid(ci, cj) && grid[ci][cj] == '1')
            {
                grid[ci][cj] = 'x';
                q.emplace(ci, cj);
            }
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    n = grid.size();
    m = grid[0].size();
    int island = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '1')
            {
                // dfs(i, j, grid);
                bfs(i, j, grid);
                island++;
            }
        }
    }

    return island;
}

int main()
{
    vector<vector<char>> grid = {{'1', '1', '1', '1', '0'},
                                 {'1', '1', '0', '1', '0'},
                                 {'1', '1', '0', '0', '0'},
                                 {'0', '0', '0', '0', '0'}};

    cout << numIslands(grid) << endl;
    return 0;
}