#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long int sum = 0;
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    printf("%lld\n", sum > 0 ? sum : 0);

    return 0;
}