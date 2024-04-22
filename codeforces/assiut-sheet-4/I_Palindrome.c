#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1001];
    scanf("%s", ch);
    int count = strlen(ch);
    char ci[count + 1];

    int result = 1;

    for (int i = 0; i < count / 2; i++)
    {
        if (ch[i] != ch[count - 1 - i])
        {
            result = 0;
            break;
        }
    }

    if (result)
        printf("YES");

    else
        printf("NO");

    return 0;
}