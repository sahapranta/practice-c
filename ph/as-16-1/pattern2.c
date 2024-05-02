#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (i >= j)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}