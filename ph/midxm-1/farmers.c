#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    float m1, m2, d;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%f %f %f", &m1, &m2, &d);
        if (m2 == 0)
        {
            printf("0\n");
        }
        else if (d == 0 || d == 1)
        {
            printf("%0.f\n", d);
        }
        else
        {
            int res = (d * m1) / (m1 + m2);
            printf("%.0f\n", d - res);
        }
    }

    return 0;
}