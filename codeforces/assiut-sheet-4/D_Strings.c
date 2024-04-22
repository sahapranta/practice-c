#include <stdio.h>
#include <string.h>

int main()
{
    char a[12], b[12];
    scanf("%s %s", a, b);
    int al = strlen(a);
    int bl = strlen(b);
    printf("%d %d\n", al, bl);
    printf("%s%s\n", a, b);

    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    printf("%s %s", a, b);

    return 0;
}