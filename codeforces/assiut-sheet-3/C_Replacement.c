#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &a);
        if (a > 0)
        {
            printf("%d ", 1);
        }
        else if (a < 0)
        {
            printf("%d ", 2);
        }
        else
        {
            printf("%d ", a);
        }
    }

    return 0;
}