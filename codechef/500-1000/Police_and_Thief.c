#include <stdio.h>

int main(void)
{
    int n, a, b;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);

        int p = a - b;

        if (p < 0)
        {
            p *= -1;
        }

        printf("%d\n", p);
    }

    return 0;
}
