#include <stdio.h>

long long int factorial(long long int x);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%lld\n", factorial(x));
    }

    return 0;
}

long long int factorial(long long int x)
{
    if (x <= 1)
    {
        return 1;
    }

    return x * factorial(x - 1);
}