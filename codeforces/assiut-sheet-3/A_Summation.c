#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long int a, sum = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%lld", &a);
        sum += a;
    }

    printf("%lld", llabs(sum));

    return 0;
}