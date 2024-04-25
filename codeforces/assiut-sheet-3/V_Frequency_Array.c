#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int fq[m + 1];

    for (int i = 1; i <= m; i++)
    {
        fq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        fq[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", fq[i]);
    }

    return 0;
}