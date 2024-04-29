#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int h = (n / 2) + 1;
    int even[n], odd[n];

    int e = 0, o = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            even[e++] = arr[i];
        }
        else
        {
            odd[o++] = arr[i];
        }
    }

    for (int i = 0; i < o; i++)
    {
        for (int j = i + 1; j < o; j++)
        {
            if (odd[i] < odd[j])
            {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    for (int i = 0; i < e; i++)
    {
        for (int j = i + 1; j < e; j++)
        {
            if (even[i] > even[j])
            {
                int t = even[i];
                even[i] = even[j];
                even[j] = t;
            }
        }
    }

    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    return 0;
}