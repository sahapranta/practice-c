#include <stdio.h>
#include <string.h>

void func(char *ar)
{
    int len = strlen(ar);
    printf("'%s' Length: %d\n", ar, len);
}

int main()
{
    char ar[20] = "hello";

    func(ar);

    return 0;
}