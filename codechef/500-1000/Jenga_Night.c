#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);
        if (b % a == 0)
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