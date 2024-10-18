// longest common substring sequence
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j <= m; j++)
            {
                dp[i][j] = 0;
            }
        }
        else
        {
            dp[i][0] = 0;
        }
    }

    int mx = -1;
    int ci, cj;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;

                if (dp[i][j] > mx)
                {
                    mx = dp[i][j];
                    ci = i, cj = j;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << mx << endl;

    string ans;
    while (ci != 0 && cj != 0)
    {
        if (a[ci - 1] == b[cj - 1])
        {
            ans += a[ci - 1];
            ci--;
            cj--;
        }
        else
        {
            break;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}

// Input
// aceghr
// acaeghbr

// Output: egh