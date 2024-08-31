#include <bits/stdc++.h>

using namespace std;

void print(list<long long int> lt)
{
    for (int v : lt)
    {
        cout << v << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int c;
        cin >> c;

        list<long long int> v;

        for (int i = 0; i < c; i++)
        {
            long long int p;
            cin >> p;
            v.push_back(p);
        }

        v.sort();
        v.unique();

        print(v);
    }

    return 0;
}

// 2
// 8
// 3 10 0 6 9 5 10 10
// 2
// 7 3