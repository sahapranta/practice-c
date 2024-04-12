#include<stdio.h>

int main(){
    long long int n;
    long long int result;
    
    scanf("%lld", &n);
    
    result = n*(n+1)/2;
    
    printf("%lld", result);
    
    return 0;
}