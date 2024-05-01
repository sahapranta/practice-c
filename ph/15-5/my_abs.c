#include <stdio.h>

int abs(int x)
{
    return x < 0 ? x * -1 : x;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", abs(n));
    return 0;
}