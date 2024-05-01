#include <stdio.h>

void fun(int *p)
{
    *p = 450;
}

int main()
{
    int x = 100;

    fun(&x);

    printf("x = %d\n", x);
    return 0;
}