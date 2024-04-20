#include <stdio.h>

int main()
{
    int n, x, y, a;
    scanf("%d", &n);

    while (n--)
    {
        int num = 0;
        scanf("%d %d", &x, &y);

        for (int i = 0; i < x; i++)
        {
            scanf("%d", &a);
            if (a >= y)
            {
                num++;
            }
        }
        printf("%d\n", num);
    }

    return 0;
}