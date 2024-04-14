#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            printf("0");
        }

        while (a != 0)
        {
            printf("%d ", a % 10);
            a /= 10;
        }

        printf("\n");
    }

    return 0;
}