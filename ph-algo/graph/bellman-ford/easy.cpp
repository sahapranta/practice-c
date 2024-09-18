#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = 30000;

struct Edge
{
    int u, v, w;
    Edge(int u, int v, int w) : u(u), v(v), w(w) {}
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    if (!m)
    {
        cout << 300000 << endl;
        return 0;
    }

    vector<Edge> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.emplace_back(u - 1, v - 1, w);
    }

    vector<int> dist(n, INF);
    dist[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (const Edge &e : edges)
        {
            if (dist[e.u] < INF && dist[e.u] + e.w < dist[e.v])
            {
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << (dist[i] == INF ? INF : dist[i]) << " ";
    }
    cout << endl;

    return 0;
}

// Input
// 4 5
// 1 2 10
// 2 3 10
// 1 3 100
// 3 1 -10
// 2 3 1

// Output: 0 10 11 30000
