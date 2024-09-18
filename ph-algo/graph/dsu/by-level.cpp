#include <bits/stdc++.h>

using namespace std;
int parent[105];
int level[105];

void initialize(int size)
{
    for (int i = 0; i <= size; i++)
    {
        parent[i] = -1;
    }
}

int Find(int node)
{
    cout << "Running Find: " << node << endl;
    if (parent[node] == -1)
    {
        return node;
    }
    else
    {
        int leader = Find(parent[node]);
        parent[node] = leader;
        return leader;
    }
}

void Union(int p, int q)
{
    int parentP = Find(p); // 1
    int parentQ = Find(q); // 2

    parent[parentQ] = parentP;
}

void UnionRank(int p, int q)
{
    int parentP = Find(p); // 1
    int parentQ = Find(q); // 2

    if (level[parentP] > level[parentQ])
    {
        parent[parentQ] = parentP;
    }
    else if (level[parentP] < level[parentQ])
    {
        parent[parentP] = parentQ;
    }
    else
    {
        parent[parentQ] = parentP;
        level[parentP]++;
    }
}

int main()
{
    initialize(7);
    UnionRank(6, 7);
    UnionRank(5, 6);
    UnionRank(4, 5);
    UnionRank(3, 4);
    UnionRank(2, 3);
    UnionRank(1, 2);

    cout << "**********************" << endl;
    for (int i = 1; i < 8; i++)
    {
        cout << Find(i) << endl;
    }

    cout << endl;

    return 0;
}