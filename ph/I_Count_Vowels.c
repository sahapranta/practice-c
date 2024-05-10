#include <stdio.h>

int cc(char *ch, int i)
{
    if (ch[i] == '\n')
    {
        return 0;
    }
    int ans = cc(ch, i + 1);

    if (ch[i] >= 'A' && ch[i] <= 'Z')
    {
        ch[i] = ch[i] + 32;
    }

    if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    char ch[205];
    fgets(ch, 205, stdin);
    printf("%d", cc(ch, 0));
    return 0;
}