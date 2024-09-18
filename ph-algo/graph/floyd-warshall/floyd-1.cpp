#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = 1e9;  // A large value to represent infinity

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));

    // Read the adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
            if (i != j && adj[i][j] == 0) {
                adj[i][j] = INF;  // Replace 0 with INF for non-existing edges
            }
        }
    }

    // Floyd-Warshall algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][k] < INF && adj[k][j] < INF) {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Input
// 4
// 0 5 9 100
// 100 0 2 8
// 100 100 0 7
// 4 100 100 0

// Output
// 0 5 7 13 
// 12 0 2 8 
// 11 16 0 7 
// 4 9 11 0