#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                std::swap(a[j], a[i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << ' ';
    }

    return 0;
}