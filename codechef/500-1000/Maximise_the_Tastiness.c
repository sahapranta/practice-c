#include <stdio.h>

int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int x = a >= b ? a : b;
        int y = c >= d ? c : d;

        printf("%d\n", x+y);
    }

    return 0;
}