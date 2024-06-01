#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a, pos;
    cin >> n;

    while (n--)
    {
        int AR[26] = {0};
        string c;

        cin >> a >> c;

        for (int i = 0; i < a; i++)
        {
            pos = int(c[i]) - 65;

            if (AR[pos] == 0)
            {
                AR[pos] = 2;
            }
            else
            {
                AR[pos]++;
            }
        }

        int sum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (AR[i])
            {
                sum += AR[i];
            }
        }

        cout << sum << endl;
    }

    return 0;
}