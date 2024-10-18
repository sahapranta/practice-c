#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    printf("%lu", sizeof(int)); // 4

    char str[] = "Hello";
    printf("%d", strlen(str)); // Error
    printf("%zu", strlen(str)); // 45



    return 0;
}