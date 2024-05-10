#include <stdio.h>

int main()
{
    int n;
    long long int a, b, c, d;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if (a == 0)
        {
            printf("0\n");
            continue;
        }

        long long int m = (b * c * d);

        if (a % m == 0)
        {
            printf("%lld\n", a / m);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}