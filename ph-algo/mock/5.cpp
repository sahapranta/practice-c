#include <bits/stdc++.h>

using namespace std;

int dif = INT_MAX;
int N;

void findDiff(vector<int> &coin, int idx, int sum1, int sum2, int s1, int s2)
{
    if (idx == N)
    {
        if (s1 == N / 2 || s2 == N / 2)
        {
            int d = abs(sum1 - sum2);
            dif = min(dif, d);
        }
        return;
    }

    if (s1 < (N + 1) / 2)
    {
        findDiff(coin, idx + 1, sum1 + coin[idx], sum2, s1 + 1, s2);
    }

    if (s2 < (N + 1) / 2)

    {
        findDiff(coin, idx + 1, sum1, sum2 + coin[idx], s1, s2 + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        cin >> N;
        vector<int> coins(N);

        for (int i = 0; i < N; i++)
        {
            cin >> coins[i];
        }

        dif = INT_MAX;

        findDiff(coins, 0, 0, 0, 0, 0);

        cout << dif << endl;
    }

    return 0;
}
