#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;
        int arr[a];

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        int sm = INT_MAX;

        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                int s = arr[i] + arr[j] + j - i;

                if (s < sm)
                {
                    sm = s;
                }
            }
        }

        cout << sm << "\n";
    }

    return 0;
}