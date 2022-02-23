#include<stdio.h>
#define AGE 18
int main()
{
    #if AGE==18
        printf("You need to be more than 18 years old");
    #elif AGE>18
        printf("Welcome to club");
    #else
        printf("You are too young for this");
    #endif
    return 0;
}
