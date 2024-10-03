#include <bits/stdc++.h>

using namespace std;

int knapsack(int n, int weight[], int value[], int W)
{
    // base case (smallest valid input value)
    if (n < 0 || W == 0)
        return 0;

    if (weight[n] <= W)
    {
        // Dual option: Include & Exclude
        int option1 = knapsack(n - 1, weight, value, W - weight[n]) + value[n];
        int option2 = knapsack(n - 1, weight, value, W);

        return max(option1, option2);
    }
    else
    {
        // one option: Exclude
        return knapsack(n - 1, weight, value, W);
    }
}

int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int W;
    cin >> W;

    cout << knapsack(n - 1, weight, value, W) << endl;

    return 0;
}

// Input:
// 4
// 2 3 4 5
// 1 3 5 3
// 8

// Output: 8