#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int x = a, y = b, z = c;
    int temp;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d", x, y, z);

    return 0;
}