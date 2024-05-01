#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    printf("0th index of arr = %p\n", &arr[0]);
    printf("0th index of arr = %p\n", arr);

    printf("0th index value = %d", arr[0]);
    printf(" | %d\n", *arr);

    printf("1st index value = %d", arr[1]);
    printf(" | %d\n", *(arr + 1));

    printf("1st index value = %d", 2[arr]);
    printf(" | %d\n", *(2 + arr));

    return 0;
}