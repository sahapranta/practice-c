#include <stdio.h>

void func(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x = 20;
    int a = 40;

    int *p = &x;

    *p = 100;
    func(&a, &x);
    int *y = &a;    
    *y = x;

    printf("a = %d\n", a);

    printf("x = %d %p\n", x, p);

    return 0;
}