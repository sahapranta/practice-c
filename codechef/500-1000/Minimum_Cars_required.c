#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    float a;

    while (n--)
    {
        scanf("%f", &a);
        printf("%.0f\n", ceil(a / 4));
    }

    return 0;
}