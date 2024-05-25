#include <iostream>
#include <algorithm>

using namespace std;

long long int *sort_it(int n)
{
    long long int *arr = new long long int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<long long int>());

    return arr;
}

int main()
{
    int n;
    cin >> n;
    long long int *it = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << it[i] << " ";
    }

    return 0;
}