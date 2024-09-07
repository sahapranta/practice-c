#include <bits/stdc++.h>

using namespace std;

char a[1001][1001];
bool vis[1001][1001];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

vector<int> rooms;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void dfs(int s1, int s2, int &count)
{
    vis[s1][s2] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = s1 + d[i].first;
        int cj = s2 + d[i].second;
        if (valid(ci, cj) && vis[ci][cj] == false && a[ci][cj] != '#')
        {
            dfs(ci, cj, count);
            count++;
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

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && vis[i][j] == false)
            {
                int count = 1;
                dfs(i, j, count);
                rooms.push_back(count);
            }
        }
    }

    if (rooms.size() > 0)
    {
        sort(rooms.begin(), rooms.end());

        for (int i : rooms)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << 0;
    }

    cout << endl;

    return 0;
}

// Input
// 5 8
// ########
// #..#...#
// ####.#.#
// #..#...#
// ########

// Output: 2 2 8