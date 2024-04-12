#include <stdio.h>
 
int main() {
    
    long long int n;
    long long int m;
    
    scanf("%lld %lld", &n, &m);
    
    m = m%10;
    n = n%10;
    printf("%lld", m+n);
    
    return 0;
}