#include <stdio.h>

int len(const char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char ch[1000000];
    scanf("%s", ch);

    printf("%d", len(ch));
    return 0;
}