#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (b == 0 || a == b)
        {
            printf("0\n");
        }
        else
        {
            int p = a - b;
            printf("%d\n", p < b ? p : b);
        }
    }

    return 0;
}