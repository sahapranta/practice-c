// naive implementation of Dijkstra algorithm
#include <bits/stdc++.h>

using namespace std;

const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];

void dijkstra(int s)
{
    queue<pair<int, int>> q;
    q.push({s, 0});
    dis[s] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            int newCost = cost + childCost;

            if (newCost < dis[childNode])
            {
                dis[childNode] = newCost; // path relaxation
                q.push({childNode, newCost});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    memset(dis, INT_MAX, sizeof(dis));

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}

// Input
// 5 8
// 0 1 10
// 0 2 7
// 0 3 4
// 1 4 3
// 2 4 5
// 2 1 1
// 3 4 5
// 3 2 1

// Output
// 0 -> 0
// 1 -> 6
// 2 -> 5
// 3 -> 4
// 4 -> 9

// DFS O(v+e)
// Dijkstra O(v*e) each edge can be update node for n -1