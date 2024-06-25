#include <bits/stdc++.h>
using namespace std;
/*
Problem 5: Find and Replace
1. Replace all occurrences with given value.
2. Find the position of the first in the vector.

input:
    10
    1 2 3 2 4 2 5 2 6 2
    2 9
    5

Output:
    1 9 3 9 4 9 5 9 6 9
    6
*/

int main()
{

    int n;
    int k;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }

    int f, r;
    cin >> f >> r;

    replace(v.begin(), v.end(), f, r);

    for (int b : v)
    {
        cout << b << " ";
    }

    cout << endl;
    int m;
    cin >> m;

    auto c = find(v.begin(), v.end(), m);

    if (c == v.end())
    {
        cout << "-1";
    }
    else
    {
        cout << c - v.begin() << " ";
    }

    return 0;
}