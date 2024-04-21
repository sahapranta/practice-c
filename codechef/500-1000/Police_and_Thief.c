#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("%d\n", 0);
        }
        else if (a == b + 1)
        {
            printf("%d\n", 1);
        }
        else
        {
            int p = ((b + 1) / 2);

            if (a < 0)
            {
                p = b + (a * -1);
            }

            printf("%d\n", p);
        }
    }

    return 0;
}