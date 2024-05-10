#include <stdio.h>

long long int factorial(long long int n)
{
    if (n < 2)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld", factorial(n));
    return 0;
}