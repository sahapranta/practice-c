#include <iostream>
#include <vector>

using namespace std;

typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    vector<ll> books(n);

    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }

    ll target;
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (books[i] == target)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
    return 0;
}