#include <bits/stdc++.h>

using namespace std;

bool subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        return s == 0;
    }

    if (a[n - 1] <= s)
    {
        bool opt1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool opt2 = subset_sum(n - 1, a, s);
        return opt1 || opt2;
    }
    else
    {
        return subset_sum(n - 1, a, s);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s;
    cin >> s;

    cout << (subset_sum(n, a, s) ? "YES" : "NO") << endl;

    return 0;
}

// Input:
// 4
// 1 2 4 6
// 7