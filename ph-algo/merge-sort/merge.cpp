#include <bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int m, int r)
{
    int lSize = m - l + 1, rSize = r - m;
    int L[lSize], R[rSize];
    int k = 0;

    for (int i = l; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }

    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[k] = a[i];
        k++;
    }

    int i = 0, j = 0;

    int cc = l;
    while (i < lSize && j < rSize)
    {
        if (L[i] <= R[j])
        {
            a[cc] = L[i];
            i++;
        }
        else
        {
            a[cc] = R[j];
            j++;
        }

        cc++;
    }

    while (i < lSize)
    {
        a[cc] = L[i];
        i++;
        cc++;
    }

    while (j < rSize)
    {
        a[cc] = R[j];
        j++;
        cc++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mid;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> mid;

    merge(a, 0, mid, n - 1);

    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

// Input
// 12
// 2 3 5 10 18 19 21 1 4 6 8 9
// 6

// Output: 1 2 3 4 5 6 8 9 10 18 19 21