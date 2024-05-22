#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long int a;

        scanf("%lld", &a);

        int count = (int)sqrt(a);

        printf("%d\n", count);
    }

    return 0;
}
