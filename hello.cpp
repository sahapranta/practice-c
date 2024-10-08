#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];

        int id1 = 0, id2 = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > a[id1])
            {
                id2 = id1;
                id1 = i;
            }
            else if (a[i] > a[id2] && i != id1)
            {
                id2 = i;
            }
        }

        cout << min(id1, id2) << " " << max(id1, id2) << endl;
    }

    return 0;
}