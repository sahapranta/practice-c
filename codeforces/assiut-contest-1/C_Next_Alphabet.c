#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);

    if (n == 'z')
    {
        n -= 26;
    }

    printf("%c", n + 1);

    return 0;
}