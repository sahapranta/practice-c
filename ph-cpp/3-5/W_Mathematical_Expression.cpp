#include <iostream>

using namespace std;

int main()
{
    int a, b, e;
    char c, d;

    cin >> a >> c >> b >> d >> e;

    int result = 0;

    if (c == '+')
    {
        result = a + b;
    }
    else if (c == '-')
    {
        result = a - b;
    }
    else if (c == '*')
    {
        result = a * b;
    }

    if (result == e)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }

    return 0;
}