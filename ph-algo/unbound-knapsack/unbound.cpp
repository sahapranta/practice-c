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
    int n, w;
    cin >> n >> w;

    dp_init(n, w);

    int val[n];
    int weight[n];

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    cout << uKnapsack(n, w, val, weight) << endl;

    return 0;
}

// Input:
// 4 6
// 5 3 2 4
// 4 1 3 2

// Output: 18