/*
 * https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
 */

#include <bits/stdc++.h>

using namespace std;

class Solution
{
    void dfs(int p, vector<int> adj[], vector<int> &vis, bool &ans)
    {
        vis[p] = 1;
        for (int child : adj[p])
        {
            if (vis[child] == 0)
            {
                dfs(child, adj, vis, ans);
            }
            else if (vis[child] == 1)
            {
                ans = true;
                return;
            }
        }
        vis[p] = 2;
    }

public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[])
    {
        vector<int> vis(V, 0);
        bool ans = false;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, vis, ans);
                if (ans)
                {
                    return true;
                }
            }
        }

        return ans;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    Solution *sol = new Solution;

    cout << sol->isCyclic(n, adj) << endl;

    return 0;
}