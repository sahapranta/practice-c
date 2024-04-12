#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    char c;

    scanf("%d%c%d", &a, &c, &b);

    int res;

    switch (c)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    
    default:        
        break;
    }

    printf("%d\n", res);

    return 0;
}