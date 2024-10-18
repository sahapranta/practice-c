#include <bits/stdc++.h>

using namespace std;

int lcs(string a, int n, string b, int m)
{
    if (n == 0 || m == 0)
        return 0;

    if (a[n - 1] == b[m - 1])
    {
        int ans = lcs(a, n - 1, b, m - 1);
        return ans + 1;
    }
    else
    {
        int ans = lcs(a, n - 1, b, m);
        int ans2 = lcs(a, n, b, m - 1);
        return max(ans, ans2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a >> b;

    cout << lcs(a, a.size(), b, b.size()) << endl;

    return 0;
}

// Input
// abcdfgr
// acfdgr

// Output: 5