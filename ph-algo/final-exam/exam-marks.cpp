#include <bits/stdc++.h>
using namespace std;

bool checkSum(int arr[], int n, int target)
{
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = target; j >= arr[i]; j--)
        {
            dp[j] = dp[j] || dp[j - arr[i]];
        }
    }

    return dp[target];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n];
        int totalSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totalSum += a[i];
        }

        int target = 1000 - m;

        if (target == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        if (target < 0 || target > totalSum)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << (checkSum(a, n, target) ? "YES" : "NO") << endl;
    }

    return 0;
}

// Input
// 3
// 5 1000
// 1 2 3 4 5
// 5 999
// 2 3 4 5 6
// 6 900
// 10 20 30 40 50 60

// Output:
// YES
// NO
// YES