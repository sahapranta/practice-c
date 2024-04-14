#include <stdio.h>

int main()
{
    int n, reversed = 0, remainder, original;

    scanf("%d", &original);
    n = original;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("%d\n", reversed);

    printf("%s", reversed == original ? "YES" : "NO");

    return 0;
}