#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int ar[n];
    cin >> ar[0];

    long long int a;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        ar[i] = a + ar[i - 1];
    }

    reverse(ar, ar + n);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}