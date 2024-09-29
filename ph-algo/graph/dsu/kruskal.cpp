#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
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
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    int totalCost = 0;
    bool cycle = false;

    for (Edge ed : edgeList)
    {
        int leaderA = find(ed.u);
        int leaderB = find(ed.v);

        if (leaderA == leaderB)
        {
            cycle = true;
            continue;
        }
        else
        {
            unionBySize(ed.u, ed.v);
            totalCost += ed.w;
        }
    }

    if (totalCost > 0)
    {
        cout << totalCost << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}

// Input
// 5 7
// 0 1 2
// 0 2 3
// 0 3 3
// 3 4 6
// 2 4 4
// 2 1 7
// 1 4 5