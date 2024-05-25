#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool found = false;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = arr[i] + arr[j] + arr[k];
                    if (sum == s)
                    {
                        found = true;
                        break;
                    }
                }

                if (found)
                    break;
            }

            if (found)
                break;
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}