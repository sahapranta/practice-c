#include <stdio.h>
#include <ctype.h>

int main()
{
    char i;

    scanf("%c", &i);

    if (i > 47 && i < 58)
    {
        printf("IS DIGIT");
    }
    else if (i > 64 && i < 123)
    {
        printf("ALPHA\n");
        if (i >= 'A' && i <= 'Z')
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }

    return 0;
}