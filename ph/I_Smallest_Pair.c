#include <stdio.h>
#include <limits.h>

int findMin(int *arr, int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j] + j - i;

            if (min > sum)
            {
                min = sum;
            }
        }
    }

    return min;
}

int main()
{
    int a, n;
    scanf("%d", &a);

    while (a--)
    {
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("%d\n", findMin(arr, n));
    }

    return 0;
}