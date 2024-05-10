#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", &s);

    int r = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            r++;
        }
        else
        {
            k++;
        }
    }

    if (r >= k)
    {
        printf("Rahim");
    }
    else
    {
        printf("Karim");
    }

    return 0;
}