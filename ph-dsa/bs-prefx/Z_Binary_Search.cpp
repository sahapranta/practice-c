#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    while (t--)
    {
        int f;
        cin >> f;
        int l = 0;
        int r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ar[mid] == f)
            {
                flag = true;
                break;
            }

            if (f > ar[mid])
            {
                l = mid + 1; // go right
            }
            else
            {
                r = mid - 1; // go left
            }
        }

        cout << (flag ? "found" : "not found") << endl;
    }

    return 0;
}