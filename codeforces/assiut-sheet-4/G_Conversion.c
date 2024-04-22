#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100000];
    scanf("%s", ch);
    int len = strlen(ch);
    char s = ' ';

    for (int i = 0; i < len; i++)
    {
        if (ch[i] == ',')
        {
            printf("%c", s);
        }
        else if (ch[i] < 'a')
        {
            printf("%c", ch[i] + s);
        }
        else
        {
            printf("%c", ch[i] - s);
        }
    }

    return 0;
}