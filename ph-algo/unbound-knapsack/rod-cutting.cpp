#include <bits/stdc++.h>

using namespace std;

int dp[1000][1000];

void dp_init(int n, int s)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }
}

int uKnapsack(int n, int s, int val[], int w[])
{
    if (n == 0 || s == 0)
    {
        return 0;
    }

    if (dp[n][s] != -1)
        return dp[n][s];

    if (w[n - 1] <= s)
    {
        int opt1 = val[n - 1] + uKnapsack(n, s - w[n - 1], val, w);
        int opt2 = uKnapsack(n - 1, s, val, w);
        return dp[n][s] = max(opt1, opt2);
    }
    else
    {
        return dp[n][s] = uKnapsack(n - 1, s, val, w);
    }
}

int main()
{
    int n;
    cin >> n;
    int val[n], w[n];

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        w[i] = i + 1;
    }

    dp_init(n, n);

    cout << uKnapsack(n, n, val, w) << endl;

    return 0;
}

// Input:
// 8
// 2 4 4 5 8 14 12 9

// Output: 18