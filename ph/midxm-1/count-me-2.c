#include <stdio.h>

int main()
{
    char a;
    int num = 0;

    while (scanf("%c", &a) != EOF)
    {
        if (a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u')
        {
            num++;
        }
    }

    printf("%d", num);

    return 0;
}