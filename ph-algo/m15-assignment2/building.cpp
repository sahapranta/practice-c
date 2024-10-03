#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v;
    long long int w;
    Edge(int u, int v, long long int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

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

bool cmp(Edge &a, Edge &b)
{
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialize(n);

    vector<Edge> edgeList;

    while (e--)
    {
        int u, v;
        long long int w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    long long int totalCost = 0;
    int count = 0;

    for (Edge ed : edgeList)
    {
        int leaderA = find(ed.u);
        int leaderB = find(ed.v);

        if (leaderA == leaderB)
        {
            continue;
        }
        else
        {
            unionBySize(ed.u, ed.v);
            totalCost += ed.w;
            count++;
        }
    }

    if (count == n - 1)
    {
        cout << totalCost << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}

// Input
// 5 7
// 1 2 10
// 1 3 5
// 3 2 4
// 2 4 1
// 3 4 2
// 4 5 3
// 1 5 2

// Output: 8