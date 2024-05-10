#include <stdio.h>

int main()
{
    int n;
    int upper = 6;
    scanf("%d", &n);
    int star = 1;
    int cal = (n - 1) / 2;
    upper = upper + cal;
    int space = upper - 1;

    for (int i = 0; i < upper; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < star; i++)
        {
            printf("*");
        }

        star += 2;
        space--;
        printf("\n");
    }

    space = upper - cal - 1;

    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < n; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}