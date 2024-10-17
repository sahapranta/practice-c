#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    int Q;
    cin >> N >> Q;

    while (Q--)
    {
        ll L, R;
        cin >> L >> R;

        ll count = (R - L) + 1;

        if (L % 2 != 0)
        {
            L += 1;
        }

        L = L / 2;

        bool right = false;

        if (R % 2 != 0)
        {
            right = true;
            R += 1;
        }

        R = R / 2;

        ll ans = count * (L + R) / 2;

        if (right && R != 1)
        {
            ans -= 1;
        }

        cout << ans << endl;
    }

    return 0;
}

// 10 5
// 3 8
// 7 10
// 3 7
// 1 1
// 1 10