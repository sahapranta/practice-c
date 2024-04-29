#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int max = 2 * n;
    int star = 1;
    int space = n - 1;

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        if (i < n - 1)
        {
            star += 2;
            space--;
        }
        else if (i > n - 1)
        {
            star -= 2;
            space++;
        }

        if (i < max - 1)
        {
            printf("\n");
        }
    }

    return 0;
}