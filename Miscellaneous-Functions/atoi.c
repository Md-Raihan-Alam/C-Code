//atoi function converts the string pointed to by str into an int value
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char num1[80],num2[80];
    printf("Enter first:");
    gets(num1);
    printf("Enter second:");
    gets(num2);
    printf("The sum is %d ",atoi(num1)+atoi(num2));
    return 0;
}