#include <bits/stdc++.h>

using namespace std;

void dijkstra(int src, vector<vector<pair<int, int>>> adj, vector<int> &dis, vector<int> &parent)
{
    dis[src] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({dis[src], src});

    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();

        for (pair<int, int> child : adj[p.second])
        {
            int childNode = child.second;
            int newCost = p.first + child.first;

            if (newCost < dis[childNode])
            {
                dis[childNode] = newCost;
                pq.push({newCost, childNode});
                parent[childNode] = p.second;
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<pair<int, int>>> adj(nodes + 1);

    vector<int> dis(nodes + 1, INT_MAX);
    vector<int> parent(nodes + 1);

    while (edges--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }

    int src = 1;

    dijkstra(src, adj, dis, parent);

    cout << "Minimum Cost: ";

    for (int i = 1; i <= nodes; i++)
    {
        cout << dis[i] << " ";
    }

    cout << endl;

    int current = nodes;
    vector<int> path;

    while (true)
    {
        path.push_back(current);

        if (current == src)
        {
            break;
        }

        current = parent[current];
    }

    reverse(path.begin(), path.end());

    cout << "Path: ";

    for (int c : path)
    {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}

// Input
// 5 6
// 1 2 2
// 2 5 5
// 2 3 4
// 1 4 1
// 4 3 3
// 3 5 1