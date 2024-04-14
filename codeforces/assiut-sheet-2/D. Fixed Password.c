#include <stdio.h>

int main()
{
    int n = 1;

    while (n != 0)
    {
        scanf("%d", &n);

        if (n == 1999)
        {
            printf("Correct");
            n = 0;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}