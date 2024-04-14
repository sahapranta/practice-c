#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%s", isPrime(n) ? "YES" : "NO");

    return 0;
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    if (n == 2 || n == 3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}