#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char ch[10010];

    while (n--)
    {
        scanf("%s", ch);
        int cap = 0, sm = 0, num = 0;

        for (int i = 0; i < strlen(ch); i++)
        {
            if (ch[i] >= '0' && ch[i] <= '9')
            {
                num++;
            }
            else if (ch[i] >= 'a' && ch[i] <= 'z')
            {
                sm++;
            }
            else if (ch[i] >= 'A' && ch[i] <= 'Z')
            {
                cap++;
            }
        }

        printf("%d %d %d\n", cap, sm, num);
    }

    return 0;
}