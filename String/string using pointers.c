#include<stdio.h>
int main()
{
    //difference between 2 init
    char *ptr="Raihan";
    char ptr2[]="Alam";
    ptr="Rina";
    printf("%s %s",ptr,ptr2);
    return 0;
}
