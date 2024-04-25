#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);

        int p = a / (b * 2);
        printf("%d\n", p);
    }

    return 0;
}