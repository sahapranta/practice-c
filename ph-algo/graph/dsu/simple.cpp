#include <bits/stdc++.h>

using namespace std;
int parent[105];

void initialize(int size)
{
    for (int i = 0; i <= size; i++)
    {
        parent[i] = -1;
    }
}

int Find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    else
    {
        int leader = Find(parent[node]);
        return leader;
    }
}

void Union(int p, int q)
{
    int parentP = Find(p); // 1
    int parentQ = Find(q); // 2

    parent[parentQ] = parentP;
}

int main()
{
    initialize(5);
    Union(4, 5);
    Union(3, 4);
    Union(2, 3);
    Union(1, 2);

    for (int i = 0; i < 5; i++)
    {
        cout << parent[i] << " ";
    }

    cout << endl;

    return 0;
}