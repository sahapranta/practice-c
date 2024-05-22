#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int arr[26] = {0};
        int m;
        char ch[m + 1];
        scanf("%d", &m);

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &ch[i]);
        }

        for (int i = 0; i < m; i++)
        {
            if (ch[i] > 64 && ch[i] < 97)
            {
                arr[ch[i] - 'a'] = 1;
            }

            if (ch[i] > 96)
            {
                arr[ch[i] - 'A'] = 2;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            printf("%d, ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}