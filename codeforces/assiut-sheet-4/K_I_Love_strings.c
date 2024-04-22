#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char a[60], b[60];
        scanf("%s %s", a, b);

        int s = strlen(a);
        int t = strlen(b);

        int mx = s >= t ? s : t;

        for (int i = 0; i < mx; i++)
        {
            if (i < s)
            {
                printf("%c", a[i]);
            }
            if (i < t)
            {
                printf("%c", b[i]);
            }
        }

        printf("\n");
    }

    return 0;
}