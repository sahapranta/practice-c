#include <bits/stdc++.h>

using namespace std;
bool vis[10][10];
int dis[10][10];

vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void bfs(int s1, int s2)
{
    queue<pair<int, int>> q;
    q.push(make_pair(s1, s2));
    vis[s1][s2] = true;
    dis[s1][s2] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int a = p.first, b = p.second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj) && vis[ci][cj] == false)
            {
                q.push(make_pair(ci, cj));
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, d;
        cin >> s >> d;
        n = 8, m = 8;
        int si = s[0] - 'a',
            sj = s[1] - '1',
            di = d[0] - 'a',
            dj = d[1] - '1';

        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));

        bfs(si, sj);
        cout << dis[di][dj] << endl;
    }

    return 0;
}

// Input
// 3
// a1 h8
// a1 c2
// h8 c3

// Output
// 6
// 1
// 4