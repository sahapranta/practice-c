#include <stdio.h>
#include <string.h>

int main()
{
    char txt[100001], name[100001];    
    scanf("%s %s", txt, name);

    if (strstr(txt, name) != NULL)
    {
        printf("It's a Date\n");
    }
    else
    {
        printf("Single e roye gelam\n");
    }

    return 0;
}