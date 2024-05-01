#include <stdio.h>

int main()
{
    int K, S;
    scanf("%d %d", &K, &S);

    int count = 0;

    for (int X = 0; X <= K; X++)
    {
        for (int Y = 0; Y <= K; Y++)
        {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}