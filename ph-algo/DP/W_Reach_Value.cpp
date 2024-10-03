#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool possible(ll n, ll x)
{
    if (n == x)
        return true;
    if (n < x)
        return false;

    bool result = possible(n, x * 10) || possible(n, x * 20);

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        ll a;
        cin >> a;
        cout << (possible(a, 1) ? "YES" : "NO") << '\n';
    }

    return 0;
}