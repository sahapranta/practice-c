// Question: You will be given an undirected graph as input. Then you will be given a node N. You need to print the number of nodes that are directly connected to the node N

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int l;
    cin >> l;

    if (l >= 0 && l < v.size())
    {
        cout << v[l].size() << endl;
    }

    return 0;
}

// Input
// 6 5
// 0 1
// 0 2
// 0 3
// 2 3
// 4 5
// 2
// Output: 2

// Input
// 6 5
// 0 1
// 0 2
// 0 3
// 2 3
// 4 5
// 0
// Output: 3

// Input
// 7 7
// 0 1
// 1 2
// 2 3
// 1 3
// 4 0
// 0 5
// 5 6
// 1
// Output: 3