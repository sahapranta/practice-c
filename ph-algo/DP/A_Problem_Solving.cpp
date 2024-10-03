#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count;
        cin >> count;

        vector<int> df(count);

        for (int i = 0; i < count; i++)
        {
            cin >> df[i];
        }
        
        int solved = df[count - 2];
        int unsolved = df[count - 1];

        if (solved + 1 == unsolved)
        {
            cout << solved << endl;
        }
        else
        {
            cout << "Ambiguous" << endl;
        }
    }

    return 0;
}