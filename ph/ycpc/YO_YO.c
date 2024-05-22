#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}