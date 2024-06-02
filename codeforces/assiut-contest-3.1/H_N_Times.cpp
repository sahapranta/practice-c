#include <iostream>

using namespace std;

void solve()
{
    int a;
    char c;
    cin >> a >> c;

    for (int i = 0; i < a; i++)
    {
        if (i)
        {
            cout << " ";
        }

        cout << c;
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }

    return 0;
}