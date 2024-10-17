#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    map<char, int> mp;
    string first, odd, last;

    for (char c : str)
    {
        mp[c]++;
    }

    int oddCount = 0;

    for (auto [a, b] : mp)
    {
        if (b % 2 == 0)
        {
            for (int i = 0; i < b / 2; i++)
            {
                first.push_back(a);
            }
        }
        else
        {
            oddCount++;

            for (int i = 0; i < b; i++)
            {
                odd.push_back(a);
            }

            if (oddCount > 1)
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }

    last = first;

    reverse(last.begin(), last.end());

    cout << first << odd << last << endl;

    return 0;
}