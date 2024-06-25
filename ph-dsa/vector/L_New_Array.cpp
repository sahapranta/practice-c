#include <bits/stdc++.h>

using namespace std;

void take_input(int n, vector<int> &v)
{
    for (int i = 0; i < n; i++)
    {
        vector<int> va;

        for (int k = 0; k < n; k++)
        {
            int a;
            cin >> a;
            va.push_back(a);
        }

        v.insert(v.begin(), va.begin(), va.end());
    }
}

void rcc(int n, int k)
{
    if (n == 0)
        return;

    int a[k];

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    rcc(n - 1, k);

    for (int j : a)
    {
        cout << j << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    // rcc(n, n);
    vector<int> v;
    take_input(n, v);

    // vector<vector<int>> v(n);

    // take_input(n, v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}