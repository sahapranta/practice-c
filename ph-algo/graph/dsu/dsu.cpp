#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int parent[N];
int sz[N];
int level[N];

void initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        sz[i] = 1;
        level[i] = 0;
    }
}

int find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = find(parent[node]); // path compression
    parent[node] = leader;
    return leader;
}

void Union(int n1, int n2)
{
    int leaderA = find(n1);
    int leaderB = find(n2);
    parent[leaderA] = leaderB;
}

void UnionByRank(int n1, int n2)
{
    int leaderA = find(n1);
    int leaderB = find(n2);

    if (level[leaderA] > level[leaderB])
    {
        parent[leaderB] = leaderA;
    }
    else if (level[leaderA] < level[leaderB])
    {
        parent[leaderA] = leaderB;
    }
    else
    {
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
}

void UnionBySize(int n1, int n2)
{
    int leaderA = find(n1);
    int leaderB = find(n2);

    if (sz[leaderA] > sz[leaderB])
    {
        parent[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA];
    }
}

int main()
{
    initialize(7);

    UnionByRank(1, 2);
    UnionByRank(2, 3);

    UnionByRank(4, 5);
    UnionByRank(5, 6);

    UnionByRank(4, 1);

    cout << find(1) << endl;
    cout << find(4) << endl;

    return 0;
}