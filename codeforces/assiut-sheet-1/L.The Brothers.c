#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    scanf("%*s %s", &a);
    scanf("%*s %s", &b);

    if (strcmp(a, b) == 0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }

    return 0;
}