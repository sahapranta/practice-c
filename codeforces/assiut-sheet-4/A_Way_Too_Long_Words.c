#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char a[110];
        scanf("%s", a);
        int s = strlen(a);

        if (s < 11)
        {
            printf("%s", a);
        }
        else
        {
            printf("%c", a[0]);
            printf("%d", s - 2);
            printf("%c", a[s - 1]);
        }

        printf("\n");
    }

    return 0;
}