#include <bits/stdc++.h>

using namespace std;

vector<int> dp;

bool possible(int n, int x)
{
    if (n == x)
        return true;
    if (n < x)
        return false;

    if (dp[x] != -1)
        return dp[x];

    dp[x] = possible(n, x + 3) || possible(n, x * 2);
    return dp[x];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;

        dp.assign(a + 1, -1);

        cout << (possible(a, 1) ? "YES" : "NO") << endl;
    }

    return 0;
}

// Input:
// 5
// 1
// 3
// 5
// 15
// 16

// Output:
// YES
// NO
// YES
// NO
// YES