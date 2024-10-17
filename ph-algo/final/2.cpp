#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll a[n];
    ll sum[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (i == 0)
        {
            sum[i] = a[i];
        }
        else
        {
            sum[i] = sum[i - 1] + a[i];
        }
    }

    ll rSum[n];

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            rSum[i] = a[i];
        }
        else
        {
            rSum[i] = rSum[i + 1] + a[i];
        }
    }

    bool unstable = true;

    ll minSum = LLONG_MAX;
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (sum[i] == rSum[i])
        {
            unstable = false;
            if (sum[i] < minSum)
            {
                minSum = sum[i];
                idx = i + 1;
            }
        }
    }

    if (unstable)
    {
        cout << "UNSTABLE" << endl;
    }
    else
    {
        cout << minSum << " " << idx << endl;
    }

    return 0;
}

// Input
// 5
// 1 2 3 2 1

// Output: 6 3

// Input
// 7
// 3 -2 1 2 -1 -1 2

// Output: 1 2