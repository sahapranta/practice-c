#include <bits/stdc++.h>

using namespace std;
const int N = 10e5 + 1;

const int INF = numeric_limits<int>::max();
vector<pair<int, int>> adj[N];
int dis[N];
int parent[N];
bool visited[N];

void dijkstra(int src)
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
                visited[childNode] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<pair<int, int>>> adj(nodes + 1);

    for (int i = 0; i < nodes; i++)
    {
        dis[i] = INF;
    }

    while (edges--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }

    int src = 1;

    dijkstra(src);

    if (!visited[nodes])
    {
        cout << -1 << endl;
        return 0;
    }

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

    for (int c : path)
    {
        cout << c << " ";
    }

    cout << endl;

    return 0;
}