#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int e;
    cin >> n >> e;
    vector<vector<int>> v(n + 1);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    long long int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        bool found = false;

        if (a == b)
        {
            found = true;
        }
        else
        {
            for (int i : v[a])
            {
                if (i == b)
                {
                    found = true;
                    break;
                }
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}

// Input
// 5 6
// 0 1
// 1 2
// 2 3
// 3 4
// 1 4
// 0 2
// 10
// 0 1
// 1 0
// 2 2
// 2 3
// 0 3
// 3 0
// 1 4
// 4 1
// 4 3
// 1 2

// Output
// YES
// NO
// YES
// YES
// NO
// NO
// YES
// NO
// NO
// YES
