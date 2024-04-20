#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a > b + (c * 2))
        {
            printf("NotQualify\n");
        }
        else
        {
            printf("Qualify\n");
        }
    }

    return 0;
}