#include <stdio.h>

int main()
{
    int a, b, i, count, l, u = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        count = i;
        l = 0;

        while (count)
        {
            if (count % 10 != 7 && count % 10 != 4)
            {
                l++;
            }

            count /= 10;
        }

        if (!l)
        {
            printf("%d ", i);
            u++;
        }
    }

    if (!u)
    {
        printf("-1");
    }

    return 0;
}