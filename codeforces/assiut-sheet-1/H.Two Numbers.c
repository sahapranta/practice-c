#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);

    float s = i / (float)j;

    printf("floor %d / %d = %.0f\n", i, j, floor(s));
    printf("ceil %d / %d = %.0f\n", i, j, ceil(s));
    printf("round %d / %d = %.0f\n", i, j, round(s));

    return 0;
}