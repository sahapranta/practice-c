#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int f;
    cin >> f;

    int left = 0, right = n - 1;
    bool flag = false;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (ar[mid] == f)
        {
            flag = true;
            break;
        }

        if (f > ar[mid])
        {
            // go right
            left = mid + 1;
        }
        else
        {
            // go left
            right = mid - 1;
        }
    }

    cout << (flag ? "true" : "false") << endl;

    return 0;
}