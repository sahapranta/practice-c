#include <stdio.h>
#include <string.h>

int is_palindrome(char *ch)
{
    int i = 0;
    int j = strlen(ch) - 1;

    while (i < j)
    {
        if (ch[i] != ch[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main()
{
    char ch[1001];
    scanf("%s", ch);

    if (is_palindrome(ch))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}