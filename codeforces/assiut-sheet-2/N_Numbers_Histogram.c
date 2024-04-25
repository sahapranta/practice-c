#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();
    int count;
    scanf("%d", &count);
    int ar[count];

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &ar[i]);

        for (int j = 0; j < ar[i]; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}