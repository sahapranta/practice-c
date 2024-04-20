#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &a);
        if (a <= 10)
        {
            printf("Lower Double");
        }
        else if (a <= 15)
        {
            printf("Lower Single");
        }
        else if (a <= 25)
        {
            printf("Upper Double");
        }
        else
        {
            printf("Upper Single");
        }
        printf("\n");
    }

    return 0;
}