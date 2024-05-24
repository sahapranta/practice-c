#include <iostream>

int main()
{
    int *a = new int[3];

    for (int i = 0; i < 3; i++)
    {
        a[i] = i + 1;
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << a[i] << std::endl;
    }

    delete[] a;
    a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 1;
        std::cout << a[i] << std::endl;
    }

    a = new int[5];

    return 0;
}
