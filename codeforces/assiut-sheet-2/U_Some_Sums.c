#include <stdio.h>

int main()
{
    int n, a, b, sum = 0;
    scanf("%d %d %d", &n, &a, &b);

    for (int i = 1; i <= n; i++)
    {
        if (i < 10)
        {
            if (i >= a && i <= b)
            {
                sum += i;
            }
        }
        else
        {
            int digit = i, s = 0, d;

            while (digit > 0)
            {
                d = digit % 10;
                s += d;
                digit /= 10;
            }            

            if (s >= a && s <= b)
            {
                sum += i;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}