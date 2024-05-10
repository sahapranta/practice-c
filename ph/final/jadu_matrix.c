#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    if (m != n)
    {
        printf("NO");
        return 0;
    }

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == m - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
            }
            else if (arr[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}