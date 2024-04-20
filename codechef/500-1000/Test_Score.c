#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (c == 0)
        {
            printf("YES\n");
        }
        else if (a * b == c || c % b == 0)
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