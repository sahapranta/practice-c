#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a;
        scanf("%d", &a);
        int arr[a];

        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        int b, found = 0;
        scanf("%d", &b);

        for (int i = 0; i < a; i++)
        {
            if (arr[i] == b)
            {
                found = 1;
                printf("YES\n");
                break;
            }
        }

        if (found == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}