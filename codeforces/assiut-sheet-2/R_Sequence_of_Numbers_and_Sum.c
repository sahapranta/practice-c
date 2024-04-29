#include <stdio.h>

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a <= 0 || b <= 0)
        {
            break;
        }

        int sum = 0;
        int min = b;
        int max = a;

        if (a < min)
        {
            min = a;
            max = b;
        }

        for (int i = min; i <= max; i++)
        {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}