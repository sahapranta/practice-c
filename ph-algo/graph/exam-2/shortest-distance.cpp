#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll INF = LLONG_MAX;
const int N = 105;
ll dist[N][N];

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else
            {
                dist[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < e; i++)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        u--;
        v--;
        dist[u][v] = min(dist[u][v], w);
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][k] < INF && dist[k][j] < INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        if (dist[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[x][y] << endl;
        }
    }

    return 0;
}

// Input
// 4 7
// 1 2 10
// 2 3 5
// 3 4 2
// 4 2 3
// 3 1 7
// 2 1 1
// 1 4 4
// 6
// 1 2
// 4 1
// 3 1
// 1 4
// 2 4
// 4 2

// Output
// 7
// 4
// 6
// 4
// 5
// 3