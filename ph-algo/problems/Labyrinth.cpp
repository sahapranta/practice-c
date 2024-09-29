// https://cses.fi/problemset/task/1193
#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
vector<char> dir = {'R', 'L', 'U', 'D'};
int n, m, dist;

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int si, int sj, vector<vector<char>> &grid)
{
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    queue<pair<int, int>> q;

    q.emplace(si, sj);
    vis[si][sj] = true;

    pair<int, int> end = {-1, -1};

    while (!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();

        if (grid[i][j] == 'B')
        {
            end = {i, j};
            break;
        }

        for (int k = 0; k < 4; k++)
        {
            int ci = i + d[k].first;
            int cj = j + d[k].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.emplace(ci, cj);
                vis[ci][cj] = true;
                parent[ci][cj] = {i, j};
            }
        }
    }

    if (end.first == -1) // No path found
    {
        cout << "NO\n";
        return;
    }

    // Path found, reconstruct it
    cout << "YES\n";
    vector<char> path;
    pair<int, int> cur = end;
    while (cur != make_pair(si, sj))
    {
        pair<int, int> p = parent[cur.first][cur.second];
        for (int k = 0; k < 4; k++)
        {
            if (p.first + d[k].first == cur.first && p.second + d[k].second == cur.second)
            {
                path.push_back(dir[k]);
                break;
            }
        }
        cur = p;
    }

    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for (char c : path)
    {
        cout << c;
    }
    cout << endl;
}

int main()
{
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    pair<int, int> start;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];

            if (grid[i][j] == 'A')
            {
                start = {i, j};
            }
        }
    }

    bfs(start.first, start.second, grid);

    return 0;
}

// Input:
// 5 8
// ########
// #.A#...#
// #.##.#B#
// #......#
// ########