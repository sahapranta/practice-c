#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int, int>> edges;
    edges.push_back({0, 1});
    edges.push_back({0, 4});
    edges.push_back({4, 1});
    edges.push_back({4, 3});
    edges.push_back({1, 3});
    edges.push_back({1, 2});
    edges.push_back({3, 2});

    int V = 7;
    vector<vector<int>> adj(V);

    for (auto p : edges)
    {
        adj[p.first].push_back(p.second);
        adj[p.second].push_back(p.first);
    }

    for (vector<int> i : adj)
    {
        for (int d : i)
        {
            cout << d << " ";
        }
        cout << endl;
    }

    return 0;
}