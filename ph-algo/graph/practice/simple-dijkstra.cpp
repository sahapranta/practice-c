// https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

#include <bits/stdc++.h>

using namespace std;

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

class Solution
{
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dis(V, INT_MAX);
        dis[S] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;

        q.push({S, 0});

        while (!q.empty())
        {
            pair<int, int> parent = q.top();
            q.pop();
            int node = parent.first;
            int cost = parent.second;

            for (vector<int> child : adj[node])
            {
                int childNode = child[0];
                int childCost = child[1];
                int newCost = cost + childCost;

                if (newCost < dis[childNode])
                {
                    dis[childNode] = newCost; // path relaxation
                    q.push({childNode, newCost});
                }
            }
        }

        return dis;
    }
};

int main()
{

    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj[n];

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> m = {b, c};
        vector<int> n = {a, c};
        adj[a].push_back(m);
        adj[b].push_back(n);
    }

    Solution *sol = new Solution;

    int s;
    cin >> s;

    vector<int> dis = sol->dijkstra(n, adj, s);

    for (int i : dis)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

// input
// 3 3
// 0 2 6
// 0 1 1
// 1 2 3
// 2

// Output: 4 3 0