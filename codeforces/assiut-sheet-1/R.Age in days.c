#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    int years = x / 365;

    int remaining = x % 365;

    int months = remaining / 30;

    int days = remaining % 30;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}