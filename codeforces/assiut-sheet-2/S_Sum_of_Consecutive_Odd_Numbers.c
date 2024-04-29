#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int sum = 0, min = x, max = y;

        if (y < min)
        {
            min = y;
            max = x;
        }

        for (int i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}