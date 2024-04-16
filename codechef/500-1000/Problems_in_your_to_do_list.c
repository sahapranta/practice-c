#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    while (n--)
    {
        int a, r = 0, num;
        scanf("%d", &a);

        while (a--)
        {
            scanf("%d", &num);
            if (num >= 1000)
            {
                r++;
            }
        }

        printf("%d\n", r);
    }

    return 0;
}