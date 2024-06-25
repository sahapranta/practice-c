#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // int arr[n];
    // fill(arr, arr + n, 0);

    // long long int a;
    // bool flag = false;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     int index = a % n;

    //     if (arr[index] == 2)
    //     {
    //         flag = true;
    //         break;
    //     }

    //     arr[index] = 2;
    // }

    // vector<long long int> arr;

    // long long int a;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     arr.push_back(a);
    // }

    // sort(arr.begin(), arr.end());

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    bool flag = false;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}