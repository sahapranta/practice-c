#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x > max)
        {
            max = x;
        }
    }

    printf("%d", max);

    return 0;
}