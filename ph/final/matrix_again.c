#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[m - 1][i]);
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[i][n - 1]);
    }

    return 0;
}