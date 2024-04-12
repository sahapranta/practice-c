#include <stdio.h>
#include <math.h>

int main()
{
    long long int a, c, b, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (b * log(a) > d * log(c))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}