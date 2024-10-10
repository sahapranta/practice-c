#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, target, s = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    cin >> target;

    int f = target + s;

    if (f > 0 && f % 2 == 0)
    {
        int dp[n + 1][s + 1];
        dp[0][0] = true;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        cout << dp[n][s] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// Input:
// 4
// 1 1 2 3
// 1

// Output: 1