#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int max;
    int min = 0;

    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    std::cout << min << ' ' << max;

    return 0;
}