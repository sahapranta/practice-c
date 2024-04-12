#include <stdio.h>

int main()
{
    int a, b, e, sum;
    char c;

    scanf("%d %c %d %*c %d", &a, &c, &b, &e);

    switch (c)
    {
    case '+':
        sum = a + b;
        break;

    case '-':
        sum = a - b;

        break;

    case '*':
        sum = a * b;
        break;

    default:
        sum = e;
        break;
    }

    if (sum == e)
    {
        printf("Yes");
    }
    else
    {
        printf("%d", sum);
    }

    return 0;
}