#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int mul_ab = (a % 100) * (b % 100) % 100;
    int mul_abc = mul_ab * (c % 100) % 100;
    int mul_abcd = mul_abc * (d % 100) % 100;
    
    printf("%02d", mul_abcd);

    return 0;
}