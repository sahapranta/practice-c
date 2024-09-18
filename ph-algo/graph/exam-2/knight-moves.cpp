#include <bits/stdc++.h>
using namespace std;

const int MAX = 105;
bool vis[MAX][MAX];
int dis[MAX][MAX];

vector<pair<int, int>> directions = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

int n, m;

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int ki, int kj) {
    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    dis[ki][kj] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int x = p.first, y = p.second;
        q.pop();

        for (auto d : directions) {
            int newX = x + d.first;
            int newY = y + d.second;

            if (valid(newX, newY) && !vis[newX][newY]) {
                q.push({newX, newY});
                vis[newX][newY] = true;
                dis[newX][newY] = dis[x][y] + 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> n >> m;

        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;

        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));

        bfs(ki, kj);

        if (dis[qi][qj] != -1) {
            cout << dis[qi][qj] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

// Input
// 4
// 8 8
// 0 0
// 7 7
// 5 6
// 0 1
// 0 1
// 4 4
// 0 0
// 0 1
// 2 2
// 0 0
// 0 1

// Output
// 6
// 0
// 3
// -1