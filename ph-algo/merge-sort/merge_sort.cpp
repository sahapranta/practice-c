#include <bits/stdc++.h>

using namespace std;

void merge(int a[], int left, int mid, int right)
{
    int lSize = mid - left + 1, rSize = right - mid;
    int leftArr[lSize], rightArr[rSize];
    int k = 0;

    for (int i = left; i <= mid; i++)
    {
        leftArr[k] = a[i];
        k++;
    }

    k = 0;
    for (int i = mid + 1; i <= right; i++)
    {
        rightArr[k] = a[i];
        k++;
    }

    int i = 0, j = 0;

    int cc = left;
    while (i < lSize && j < rSize)
    {
        if (leftArr[i] <= rightArr[j])
        {
            a[cc] = leftArr[i];
            i++;
        }
        else
        {
            a[cc] = rightArr[j];
            j++;
        }

        cc++;
    }

    while (i < lSize)
    {
        a[cc] = leftArr[i];
        i++;
        cc++;
    }

    while (j < rSize)
    {
        a[cc] = rightArr[j];
        j++;
        cc++;
    }
}

void merge_sort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);
        // cout << "Hello" << endl;
        // for (int i = l; i <= mid; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // for (int i = l; i <= mid; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        merge(a, left, mid, right);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    merge_sort(a, 0, n - 1);

    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

// Input
// 12
// 15 4 3 9 2 8 10 12 6 1 21 24

// Output: 1 2 3 4 6 8 9 10 12 15 21 24