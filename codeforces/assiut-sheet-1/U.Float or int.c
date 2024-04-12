#include <stdio.h>

int main()
{
    float a;

    scanf("%f", &a);

    int i = (int)a;

    if (a == i)
    {
        printf("int %d\n", i);
    }
    else
    {
        printf("float %d %0.3f\n", i, a - i);
    }

    return 0;
}