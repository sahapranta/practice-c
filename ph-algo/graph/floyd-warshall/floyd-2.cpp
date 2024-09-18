// https://basecamp.eolymp.com/en/problems/975
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int INF = INT_MAX / 2; // Use INT_MAX / 2 to avoid overflow

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> dist(n, vector<int>(n));

    // Read the input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> dist[i][j];
            if (dist[i][j] == -1)
            {
                dist[i][j] = INF; // Replace -1 with INF for non-existing edges
            }
        }
    }

    // Floyd-Warshall algorithm
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][k] < INF && dist[k][j] < INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Find the maximum shortest distance
    int max_dist = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && dist[i][j] < INF)
            {
                max_dist = max(max_dist, dist[i][j]);
            }
        }
    }

    cout << max_dist << endl;

    return 0;
}

// Input
// 4
// 0 5 9 -1
// -1 0 2 8
// -1 -1 0 7
// 4 -1 -1 0