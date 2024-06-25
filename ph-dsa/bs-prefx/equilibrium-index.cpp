#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int leftSum = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (leftSum == (sum - arr[i]))
        {
            index = i;
            break;
        }

        leftSum += arr[i];
    }

    if (index >= 0)
    {
        cout << arr[index];
    }
    else
    {
        cout << "Not found!" << endl;
    }

    return 0;
}