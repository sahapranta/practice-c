#include <stdio.h>

int main()
{
    int a, b;
    char c;

    scanf("%d %c %d", &a, &c, &b);

    switch (c)
    {
    case '<':
        printf("%s", a < b ? "Right" : "Wrong");
        break;

    case '>':
        printf("%s", a > b ? "Right" : "Wrong");
        break;

    case '=':
        printf("%s", a == b ? "Right" : "Wrong");
        break;

    default:
        printf("Wrong");
        break;
    }

    return 0;
}