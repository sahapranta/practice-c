#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;
    bool ok = false;

    if (c == '<')
    {
        ok = a < b;
    }
    else if (c == '>')
    {
        ok = a > b;
    }
    else if (c == '=')
    {
        ok = a == b;
    }

    if (ok)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}