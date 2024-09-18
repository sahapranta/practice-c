#include <bits/stdc++.h>

using namespace std;

char a[1001][1001];
bool vis[1001][1001] = {false};

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

bool found = false;

void dfs(int s1, int s2, int d1, int d2)
{
    char ch = a[s1][s2];

    vis[s1][s2] = true;

    if (s1 == d1 && s2 == d2)
    {
        found = true;
    }

    for (int i = 0; i < 4; i++)
    {
        int ci = s1 + d[i].first;
        int cj = s2 + d[i].second;
        if (valid(ci, cj) && vis[ci][cj] == false && a[ci][cj] != '-')
        {
            dfs(ci, cj, d1, d2);
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

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    dfs(si, sj, di, dj);

    cout << (found ? "YES" : "NO") << endl;

    return 0;
}

// Input 1
// 5 4
// ..-.
// ---.
// ..-.
// --..
// ....
// 0 1
// 3 2

// Output 1: NO


// Input 2
// 5 4
// ....
// ---.
// ..-.
// --..
// ....
// 0 1
// 3 2

// Output 2: YES