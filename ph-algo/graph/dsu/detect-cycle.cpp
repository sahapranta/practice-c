#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void initialize(int count)
{
    for (int i = 0; i < count; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int find(int node)
{
    if (parent[node] == -1)
        return node;

    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}

void unionBySize(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);

    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialize(n);
    bool cycle = false;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            unionBySize(a, b);
        }
    }

    cout << (cycle ? "Cycle Found" : "Cycle not Found") << endl;

    return 0;
}


// Input
// 6 6
// 0 1
// 0 2
// 0 3
// 3 4
// 3 5
// 4 5