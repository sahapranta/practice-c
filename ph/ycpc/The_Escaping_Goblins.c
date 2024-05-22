#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, k;
    scanf("%d %d\n%d", &a, &b, &k);

    if (abs(a - b) > k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}