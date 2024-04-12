#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (c >= a && c <= b)
    {
        if (d >= b)
        {
            printf("%d %d", c, b);
        }
        else if (b >= d)
        {
            printf("%d %d", c, d);
        }
    }
    else if (a >= c && a <= d)
    {
        if (b >= d)
        {
            printf("%d %d", a, d);
        }
        else if (d >= b)
        {
            printf("%d %d", a, b);
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}