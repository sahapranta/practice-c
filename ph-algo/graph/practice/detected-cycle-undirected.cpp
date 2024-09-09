/*
 * https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
 */
#include <bits/stdc++.h>

using namespace std;

class Solution
{
    void dfs(int p, vector<int> adj[], vector<bool> &vis, vector<int> &parent, bool &ans)
    {
        vis[p] = true;
        for (int child : adj[p])
        {
            if (!vis[child])
            {
                parent[child] = p;
                dfs(child, adj, vis, parent, ans);
            }
            else if (parent[p] != child)
            {
                ans = true;
                return;
            }
        }
    }

public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[])
    {
        vector<bool> vis(V, false);
        bool ans = false;
        vector<int> parent(V, -1);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj, vis, parent, ans);
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
        adj[b].push_back(a);
    }

    Solution *sol = new Solution;

    cout << sol->isCycle(n, adj) << endl;

    return 0;
}