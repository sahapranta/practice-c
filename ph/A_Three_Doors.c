#include <stdio.h>

void solve()
{
    int k;
    scanf("%d", &k);

    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = arr[k - 1];

    if (a == 0)
    {
        printf("NO\n");
        return;
    }

    k = a;
    a = arr[k - 1];

    if (a == 0)
    {
        printf("NO\n");
        return;
    }

    printf("YES\n");
    return;
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }

    return 0;
}