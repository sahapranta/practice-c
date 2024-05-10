#include <stdio.h>

void pp(int num)
{
    if (num == 0)
        return;
    int x = num % 10;
    pp(num / 10);
    printf("%d ", x);
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int p;
        scanf("%d", &p);
        pp(p);
        if (p == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}