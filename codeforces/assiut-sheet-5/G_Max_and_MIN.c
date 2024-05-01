#include <stdio.h>
#include <limits.h>

void maxMin(int *arr, int n)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("%d %d\n", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    maxMin(&arr, n);

    return 0;
}