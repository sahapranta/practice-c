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

    reverse(v.begin(), v.end());

    for (int k : v)
    {
        cout << k << " ";
    }

    cout << endl;

    return 0;
}