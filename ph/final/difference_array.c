#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a;
    scanf("%d", &a);

    while (a--)
    {
        scanf("%d", &n);
        int a[n];
        int b[n];        

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1 + i; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(a[i] - b[i]));
        }

        printf("\n");
    }

    return 0;
}