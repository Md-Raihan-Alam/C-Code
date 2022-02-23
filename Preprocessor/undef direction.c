#include<stdio.h>
#define AGE 17
int main()
{
    printf("%d",AGE);
    #undef AGE
    printf("%d",AGE);
    return 0;
}
