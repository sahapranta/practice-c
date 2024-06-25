#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    int counter = 0;

    for (int k : v)
    {
        auto it = find(v.begin(), v.end(), k + 1);

        if (it != v.end())
        {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}