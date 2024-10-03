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

void dfs(int s1, int s2, int &count)
{
    vis[s1][s2] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = s1 + d[i].first;
        int cj = s2 + d[i].second;
        if (valid(ci, cj) && vis[ci][cj] == false && a[ci][cj] != '-')
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

    int roomSize = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && vis[i][j] == false)
            {
                int count = 1;
                dfs(i, j, count);
                roomSize = min(roomSize, count);
            }
        }
    }

    if (roomSize == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << roomSize;
    }

    cout << endl;

    return 0;
}

// Input
// 6 5
// ..-..
// ..-..
// -----
// .-...
// .----
// .....

// Output: 3

// Input
// 3 3
// ---
// ---
// ---

// Output: -1