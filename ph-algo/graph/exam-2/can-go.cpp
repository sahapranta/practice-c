#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const long long int INF = 1e18;
int n;

vector<ll> dijkstra(vector<vector<pair<ll, int>>> &adj, int src)
{
    vector<ll> dist(n + 1, INF);
    dist[src] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, src});

    while (!pq.empty())
    {
        ll w = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (w > dist[node])
            continue;

        for (pair<ll, int> child : adj[node])
        {
            ll newCost = dist[node] + child.first;
            if (newCost < dist[child.second])
            {
                dist[child.second] = newCost;
                pq.push({newCost, child.second});
            }
        }
    }

    return dist;
}

int main()
{
    ll e;
    cin >> n >> e;

    vector<vector<pair<ll, int>>> adj(n + 1);

    for (int i = 0; i < e; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
    }

    int s;
    cin >> s;

    vector<ll> shortP = dijkstra(adj, s);

    int q;
    cin >> q;

    while (q--)
    {
        int d;
        ll dw;
        cin >> d >> dw;

        if (shortP[d] <= dw)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << "\n";
    }

    return 0;
}

// Input
// 5 7
// 1 2 10
// 1 3 2
// 3 2 1
// 2 4 7
// 3 4 2
// 4 5 5
// 2 5 2
// 1
// 5
// 1 0
// 2 5
// 3 1
// 4 4
// 5 6

// Output
// YES
// YES
// NO
// YES
// YES