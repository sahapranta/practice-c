#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
int dis[N];

int main()
{
    int n, e;
    cin >> n >> e;

    vector<Edge> EdgesList;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;

        EdgesList.push_back(Edge(u, v, c));
        EdgesList.push_back(Edge(v, u, c));
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgesList)
        {
            int u = ed.u, v = ed.v, c = ed.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (Edge ed : EdgesList)
    {
        int u = ed.u, v = ed.v, c = ed.c;

        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cout << "Cycle Found, No Answer" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dis[i] << endl;
    }

    return 0;
}

// Input
// 4 4
// 1 3 3
// 0 3 5
// 2 1 1
// 0 2 2

// Output
// 0 0
// 1 3
// 2 2
// 3 5