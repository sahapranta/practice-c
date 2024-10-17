#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    ll total = 0;
    ll taken = a[0];

    for (int i = 0; i < n; i++)
    {
        if (taken > 0)
        {
            taken = min(taken, a[i]);
            total += taken;
            taken--;
        }
    }

    cout << total << endl;

    return 0;
}
