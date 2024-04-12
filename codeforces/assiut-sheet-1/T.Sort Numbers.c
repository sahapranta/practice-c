#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int x = a, y = b, z = c;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d", x, y, z);

    return 0;
}