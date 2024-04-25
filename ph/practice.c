#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];

    int p = strcmp("aaa", "ade");
    strcat(a, p);

    printf("%d\n", p);

    scanf("%s", a);
    int ch[26] = {0};

    for (int i = 0; i < strlen(a); i++)
    {
        ch[a[i] - 'a']++;
    }

    for (int i = 0; i < strlen(a); i++)
    {
        int val = a[i] - 'a';

        if (ch[val] != 0)
        {
            printf("%c - %d\n", a[i], ch[val]);
        }

        ch[val] = 0;
    }

    return 0;
}