#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    int a;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (a > 0)
        {
            positive++;
        }
        else if (a < 0)
        {
            negative++;
            a = a * -1;
        }

        if (a % 2 == 0)
        {
            even++;
        }
        else if (a % 2 != 0)
        {
            odd++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

    return 0;
}