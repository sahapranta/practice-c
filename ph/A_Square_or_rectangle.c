#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a == b)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}