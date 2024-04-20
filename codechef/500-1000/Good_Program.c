#include <stdio.h>

int main()
{
    int count, n;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n);

        if (n % 4 == 0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Not Good\n");
        }
    }

    return 0;
}