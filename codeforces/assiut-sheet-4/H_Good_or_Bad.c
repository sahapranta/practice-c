#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[100001];
        scanf("%s", &s);
        int len = strlen(s);
        int i = 0;

        for (; i < len - 2; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' || s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                printf("Good\n");
                break;
            }
        }

        if (i == len - 2)
        {
            printf("Bad\n");
        }
    }

    return 0;
}