#include <stdio.h>

int main()
{
    int n = 5, x = 9, f = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int k = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                f = 1;
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");

    return 0;
}