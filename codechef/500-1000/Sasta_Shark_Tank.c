#include <stdio.h>

int main()
{
    int count, a, b;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &a, &b);
        a *= 10;
        b *= 5;

        if (a > b)
        {
            printf("FIRST\n");
        }
        else if (a < b)
        {
            printf("SECOND\n");
        }
        else
        {
            printf("ANY\n");
        }
    }

    return 0;
}