//function pointer
#include<stdio.h>
int Add(int a,int b)
{
    return a+b;
}
int main()
{
    int c;
    //pointer to function that should take
    //(int,int) a argument/parameter and return integer
    int (*p)(int,int);
    p = &Add;
    c=(*p)(2,3);//de-reference and executing the program
    printf("%d",c);
    return 0;
}
