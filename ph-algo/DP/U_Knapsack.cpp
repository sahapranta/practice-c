#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int dp[N][N];
int weight[N];
int value[N];

int knapsack(int n, int W)
{
    if (n < 0 || W == 0)
        return 0;

    if (dp[n][W] != -1)
        return dp[n][W];

    if (weight[n] <= W)
    {
        int p1 = knapsack(n - 1, W - weight[n]) + value[n];
        int p2 = knapsack(n - 1, W);

        return dp[n][W] = max(p1, p2);
    }
    else
    {
        return dp[n][W] = knapsack(n - 1, W);
    }
}

int main()
{
    int n, W;
    cin >> n >> W;

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        cin >> value[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n - 1, W) << endl;

    return 0;
}