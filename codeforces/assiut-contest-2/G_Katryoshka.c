#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);

    if (a <= 1)
    {
        printf("%lld", a);
    }
    else if (a <= b)
    {
        printf("%lld", a <= c ? a : c);
    }
    else if (c < a && c < b)
    {
        printf("%lld", c);
    }
    else
    {
        long long int sum = b;
        long long int r = llabs(a - b) / 2;
        long long int f = llabs(c - b);

        sum += r <= f ? r : f;

        printf("%lld", sum);
    }

    return 0;
}