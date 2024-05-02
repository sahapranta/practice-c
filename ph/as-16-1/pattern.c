#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int obj = 1;

    for (int i = 1; i < (2 * n); i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < obj; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");

        if (i >= n)
        {
            obj -= 2;
            space++;
        }
        else
        {
            obj += 2;
            space--;
        }
    }

    return 0;
}