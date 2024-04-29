#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void revStr(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char A[100001], B[100001];

    scanf("%s", A);
    scanf("%s", B);

    revStr(A);
    revStr(B);
    int carry = 0;
    char result[1002] = {'\0'};
    int maxLength = strlen(A) > strlen(B) ? strlen(A) : strlen(B);
    
    for (int i = 0; i < maxLength; i++)
    {
        int digitA = (i < strlen(A)) ? (A[i] - '0') : 0;
        int digitB = (i < strlen(B)) ? (B[i] - '0') : 0;
        int sum = digitA + digitB + carry;
        result[i] = sum % 10 + '0';
        carry = sum / 10;
    }

    if (carry > 0)
    {
        result[maxLength] = carry + '0';
    }

    revStr(result);
    printf("%s\n", result);

    return 0;
}