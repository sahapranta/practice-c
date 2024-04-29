#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    int maxIndex = -1, secondMaxIndex = -1;
    int maxValue = -1, secondMaxValue = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxValue)
        {
            secondMaxValue = maxValue;
            maxValue = A[i];
            secondMaxIndex = maxIndex;
            maxIndex = i;
        }
        else if (A[i] > secondMaxValue && A[i] != maxValue)
        {
            secondMaxValue = A[i];
            secondMaxIndex = i;
        }
    }

    if (secondMaxIndex == -1)
    {
        printf("Value : -1\nIndex : -1\n");
    }
    else
    {
        printf("Value : %d\nIndex : %d\n", secondMaxValue, secondMaxIndex);
    }

    return 0;
}