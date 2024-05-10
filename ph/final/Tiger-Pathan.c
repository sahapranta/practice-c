#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);

    while (n--)
    {        
        scanf("%d", &k);
        char ch[k + 1];

        scanf("%s", ch);

        int p = 0, t = 0;

        for (int i = 0; i < k; i++)
        {
            if (ch[i] == 'P')
            {
                p++;
            }

            if (ch[i] == 'T')
            {
                t++;
            }
        }

        if (p > t)
        {
            printf("Pathaan\n");
        }
        else if (t > p)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}