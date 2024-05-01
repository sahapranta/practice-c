#include <stdio.h>

void sort(int *a, int *b)
{
    int temp;

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int A = a, B = b, C = c;

    sort(&A, &B);
    sort(&A, &C);
    sort(&B, &C);

    printf("%d\n%d\n%d\n", A, B, C);
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}