#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, W;
        cin >> n >> W;

        int weight[n], value[n];

        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }

        int dp[n + 1][W + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= W; j++)
            {
                if (weight[i - 1] <= j)
                {
                    int opt1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                    int opt2 = dp[i - 1][j];
                    dp[i][j] = max(opt1, opt2);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        cout << dp[n][W] << endl;
    }

    return 0;
}

// Input:
// 2
// 4 7
// 2 3 4 5
// 4 7 6 5
// 4 17
// 10 1 6 9
// 6 10 10 8

// Output:
// 13
// 28