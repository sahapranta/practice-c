#include <stdio.h>

int main()
{
    int i;

    scanf("%d", &i);

    i = i / 1000;

    if (i % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}