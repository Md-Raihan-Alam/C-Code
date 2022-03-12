#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    ///Remove the buffer of input or file
    fflush(stdin);
    return 0;
}
