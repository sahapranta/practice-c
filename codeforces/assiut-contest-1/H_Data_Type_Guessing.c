#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);

    double result = (double)n * k / a;
    long long int res = result;

    double remaining = result - res;

    if (remaining > 0)
    {
        printf("double");
    }
    else if (res <= INT_MAX)
    {
        printf("int");
    }
    else
    {
        printf("long long");
    }

    return 0;
}