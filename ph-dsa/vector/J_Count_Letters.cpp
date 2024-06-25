#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(26, 0);
    char s;

    while (cin >> s)
    {
        int i = s - 'a';
        v[i]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            cout << char(i + 'a') << " : " << v[i] << endl;
        }
    }

    return 0;
}