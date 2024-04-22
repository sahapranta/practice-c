#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = INT_MIN;
    int max = INT_MAX;
    int minIndex, maxIndex;

    for (int i = 0; i < n; i++)
    {
        if (min < ar[i])
        {
            min = ar[i];
            minIndex = i;
        }

        if (max > ar[i])
        {
            max = ar[i];
            maxIndex = i;
        }
    }
    
    ar[maxIndex] = min;
    ar[minIndex] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}