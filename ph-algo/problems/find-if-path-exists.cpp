// https://leetcode.com/problems/find-if-path-exists-in-graph/description/
#include <bits/stdc++.h>

using namespace std;

bool visited[105] = {false};

void bfs(int src, vector<vector<int>> &graph)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : graph[p])
        {
            if (!visited[c])
            {
                q.push(c);
                visited[c] = true;
            }
        }
    }
}

void dfs(int src, vector<vector<int>> &graph)
{
    visited[src] = true;
    for (int c : graph[src])
    {
        if (!visited[c])
        {
            dfs(c, graph);
        }
    }
}

int main()
{
    int n = 6;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {3, 5}, {5, 4}, {4, 3}}; // Output: false
    // int n = 3;
    // vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 0}}; // Output: True
    vector<vector<int>> graph(n);

    for (vector<int> e : edges)
    {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }

    int src = 0, dest = 5;

    // bfs(src, graph);
    dfs(src, graph);

    cout << (visited[dest] ? "true" : "false") << endl;

    return 0;
}