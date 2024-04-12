#include<stdio.h>

int main() {
    const float PI = 3.141592653;
    float r;
    
    scanf("%f", &r);

    printf("%.9f\n", PI * r * r);

    return 0;
}