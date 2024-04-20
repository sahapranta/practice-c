#include <stdio.h>

int main(void)
{
    int count, num, remainder;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int rev = 0;
        scanf("%d", &num);

        while (num != 0)
        {
            remainder = num % 10;
            rev = rev * 10 + remainder;
            num /= 10;
        }

        printf("%d\n", rev);
    }

    return 0;
}