#include <stdio.h>

int main()
{
    int c, r;
    scanf("%d %d", &c, &r);

    int m = 0;

    for (int i = 1; i <= c; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < r; j++)
            {
                printf("#");
            }
        }
        else
        {
            if (i % 4 != 0)
            {
                for (int j = 0; j < r - 1; j++)
                {
                    printf(".");
                }
                printf("#");
            }
            else
            {
                printf("#");

                for (int j = 0; j < r - 1; j++)
                {
                    printf(".");
                }
            }
        }

        printf("\n");
    }

    return 0;
}