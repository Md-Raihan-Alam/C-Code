/// labs function returns the absolute value of the long int num
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    char num[80];
    gets(num);
return labs(atol(num));
}