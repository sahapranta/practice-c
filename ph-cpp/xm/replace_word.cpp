#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string str, m;
        cin >> str >> m;

        size_t size = m.size();

        while (str.find(m) != -1)
        {
            str.replace(str.find(m), size, "#");
        }

        cout << str << endl;
    }

    return 0;
}