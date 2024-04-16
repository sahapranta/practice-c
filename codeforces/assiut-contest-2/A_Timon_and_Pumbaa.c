#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int sub = a - b;

    printf("%d\n", sub > 0 ? sub : 0);

    return 0;
}