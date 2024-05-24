#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    long long int a[n];

    int min = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (min < a[i])
        {
            min = a[i];
        }
    }

    std::cout << min << std::endl;

    return 0;
}