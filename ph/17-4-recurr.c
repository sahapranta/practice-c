#include <stdio.h>

void fun(int i)
{
    if (i == 0)
        return;
    printf("%d ", i);
    fun(i - 1);
}

void func(int *arr, int n, int i)
{
    if (i == n)
        return;

    func(arr, n, i + 1);
    printf("%d ", arr[i]);
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    fun(5);
    printf("\n");
    func(arr, 5, 0);
    return 0;
}