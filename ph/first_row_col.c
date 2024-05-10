#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int ar[c][r];

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        printf("%d ", ar[0][i]);
    }
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", ar[i][0]);
    }

    return 0;
}