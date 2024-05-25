#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }

    sort(ch, ch + n);

    for (int i = 0; i < n; i++)
    {
        cout << ch[i];
    }

    return 0;
}