#include <stdio.h>

int main()
{
    int p, x;
    scanf("%d %d", &p, &x);

    float ans = (float) (x * 100) / (100 - p);
    printf("%.2f", ans);
    return 0;
}