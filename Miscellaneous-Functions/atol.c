//atol function converts the string pointed to by str into a long int value
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    char num1[80],num2[80];
    printf("Enter first:");
    gets(num1);
    printf("Enter second:");
    gets(num2);
    printf("The sum is %ld",atol(num1)+atol(num2));
    return 0;
}