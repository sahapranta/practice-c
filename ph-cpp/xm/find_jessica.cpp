#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, word;
    getline(cin, s);
    stringstream ss(s);

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}