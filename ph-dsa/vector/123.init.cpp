#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Problem 1: Basic Vector Initialization
    // initialize a vector with 1 to N and print.
    int N;
    cin >> N;
    vector<int> vv;

    for (int i = 1; i <= N; i++)
    {
        vv.push_back(i);
    }

    for (int k : vv)
    {
        cout << k << " ";
    }

    cout << endl;

    // Problem 2: Vector Initialization with a Fixed Value
    // initialize a vector of size 5 with all elements set to N and print.
    int n;
    cin >> n;
    vector<int> vvv(5, n);

    for (int k : vvv)
    {
        cout << k << " ";
    }

    cout << endl;

    // Problem 3: Vector Initialization from an Array
    // initialize a vector from an array of integers and print the elements.

    int a[5] = {10, 20, 30, 40, 50}; // here is the array

    int size = sizeof(a) / sizeof(a[0]);

    vector<int> v(a, a + size);

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}