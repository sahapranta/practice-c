#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    printf("%.2f", (b / (100 - a)) * 100);

    return 0;
}