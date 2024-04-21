#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a >= b && a >= c)
        {
            printf("%d", a);
        }
        else if (b >= a && b >= c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
        printf("\n");
    }

    return 0;
}