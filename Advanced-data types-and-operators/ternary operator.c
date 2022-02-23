#include<stdio.h>
int main()
{
    int i;
    printf("Enter your age:");
    scanf("%d",&i);
    ///the ternary opertator
    i=i<18?1:-1;/// var=condition?true:false
    if(i==1) printf("Child");
    if(i==-1) printf("Adult");
    return 0;
}
