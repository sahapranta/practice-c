#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;

    while (n--)
    {
        cin >> s;

        int sum = 0;
        int count = 0;

        for (char c : s)
        {
            count++;

            if (count < 4)
            {
                sum += int(c);
            }
            else
            {
                sum -= int(c);
            }
        }

        if (sum)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}