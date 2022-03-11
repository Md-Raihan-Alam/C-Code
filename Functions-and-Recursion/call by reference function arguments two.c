#include<stdio.h>
void Increment(int *x)
{
    *x=(*x)+1;
}
int main()
{
    int a;
    a=10;
    Increment(&a);
    printf("a=%d",a);
    return 0;
}
