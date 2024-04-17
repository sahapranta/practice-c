#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a;
        scanf("%d", &a);
        if (a <= 50)
        {
            printf("LEFT\n");
        }
        else
        {
            printf("RIGHT\n");
        }
    }

    return 0;
}