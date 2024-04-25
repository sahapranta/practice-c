#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d", &a, &b);
        int need = a * 2;
        int right = need - b;

        if (b > a)
        {
            right = a;
        }

        printf("%d\n", right);
    }

    return 0;
}