#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &c, &r);

    int arr[c][r];

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = r - 1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}