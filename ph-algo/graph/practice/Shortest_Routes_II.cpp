#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF = 1e18 + 5;

int main()
{
    int n, e, q;
    cin >> n >> e >> q;
    ll adj[n + 5][n + 5];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                adj[i][j] = 0;
            }
            else
            {
                adj[i][j] = INF;
            }
        }
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c);
        adj[b][a] = min(adj[b][a], c);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    while (q--)
    {
        int s, d;
        cin >> s >> d;
        if (adj[s][d] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj[s][d] << endl;
        }
    }

    return 0;
}
