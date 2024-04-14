#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a, b, c, d;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if ((a > b + c + d) || (b > a + c + d) || (c > a + b + d) || (d > a + b + c))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}