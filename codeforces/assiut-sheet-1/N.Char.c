#include <stdio.h>
#include <ctype.h>

int main()
{
    char i;

    scanf("%c", &i);

    if (islower(i))
    {
        printf("%c", i - 32);
    }
    else
    {
        printf("%c", i + 32);
    }

    return 0;
}