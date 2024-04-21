#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);
    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int res[n + m];

    for (int i = 0; i < n; i++)
    {
        res[i] = arr1[i];
    }

    int k = n;
    for (int i = 0; i < m; i++)
    {
        res[k] = arr2[i];
        k++;
    }

    printf("%d\n", n + m);
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}