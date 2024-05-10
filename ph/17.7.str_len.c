#include <stdio.h>

int fun(char *a, int i)
{
    if (a[i] == '\0')
        return 0;
    int len = fun(a, i + 1);
    return len + 1;
}

int main()
{
    char ch[] = "hello";
    int l = fun(ch, 0);
    printf("%d\n", l);
    return 0;
}