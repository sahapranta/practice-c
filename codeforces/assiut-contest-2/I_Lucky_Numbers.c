#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);

    a = n % 10;
    b = n / 10;

    printf("%s", (a % b == 0) || (b % a == 0) ? "YES" : "NO");

    return 0;
}