#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge
{
public:
    int u, v;
    ll c;
    Edge(int u, int v, ll c)
    {
        this->u = u - 1;
        this->v = v - 1;
        this->c = c;
    }
};

const int N = 1005;
ll dis[N];
const ll INF = LLONG_MAX;

int main()
{
    int n;
    ll e;
    cin >> n >> e;

    vector<Edge> EdgesList;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        ll c;
        cin >> u >> v >> c;
        EdgesList.push_back(Edge(u, v, c));
    }

    int src;
    cin >> src;
    src--;

    for (int i = 0; i < n; i++)
    {
        dis[i] = INF;
    }

    dis[src] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (Edge ed : EdgesList)
        {
            int u = ed.u, v = ed.v;
            ll c = ed.c;

            if (dis[u] < INF && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (Edge ed : EdgesList)
    {
        int u = ed.u, v = ed.v;
        ll c = ed.c;

        if (dis[u] < INF && dis[u] + c < dis[v])
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int dest;
        cin >> dest;
        dest--;

        if (dis[dest] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[dest] << endl;
        }
    }

    return 0;
}


// Input
// 5 7
// 1 2 10
// 1 3 -2
// 3 2 1
// 2 4 7
// 3 4 -3
// 4 5 5
// 2 5 2
// 5
// 5
// 1
// 2
// 3
// 4
// 5

// Output
// Not Possible
// Not Possible
// Not Possible
// Not Possible
// 0