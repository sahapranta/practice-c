#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int cn = n - 2;
        int a[cn];
        ll sum, csum = 0;

        for (int i = 0; i < cn; i++)
        {
            cin >> a[i];
            csum += a[i];
        }

        cin >> sum;

        cout << (sum - csum) + 1 << endl;
    }

    return 0;
}

// Input
// 3
// 5
// 5 4 2
// 15
// 6
// 0 4 3 1
// 15
// 3
// 0
// 100000000

// Output
// 5
// 8
// 100000001
