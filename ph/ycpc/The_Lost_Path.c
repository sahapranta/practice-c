#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b > 0 && a % b >= 0)
    {
        printf("%d\n", a % b);
    }
    else
    {
        printf("-1");
    }

    return 0;
}